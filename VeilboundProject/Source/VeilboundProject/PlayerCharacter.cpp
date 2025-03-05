#include "PlayerCharacter.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SpotLightComponent.h"
#include "Camera/CameraShakeBase.h"  // Include the Camera Shake header

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create Camera Component
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;

	// Create Flashlight Component
	FlashlightComponent = CreateDefaultSubobject<USpotLightComponent>("FlashlightComponent");
	FlashlightComponent->SetupAttachment(Camera); // Attach to Camera
	FlashlightComponent->SetIntensity(5000.0f);
	FlashlightComponent->SetLightColor(FLinearColor::White);
	FlashlightComponent->SetInnerConeAngle(25.0f);
	FlashlightComponent->SetOuterConeAngle(45.0f);
	FlashlightComponent->SetAttenuationRadius(1200.0f);
	FlashlightComponent->SetVisibility(false); // Start turned off
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float Speed = GetVelocity().Size();

	// Handle Camera Shake Based on Movement State
	HandleMovementCameraShake(Speed);
}

void APlayerCharacter::PlayCameraShake(TSubclassOf<UCameraShakeBase> CameraShakeClass)
{
	if (CameraShakeClass && Camera)
	{
		// Play the camera shake at the camera's location and with the default settings
		GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(CameraShakeClass);
	}
}

void APlayerCharacter::HandleMovementCameraShake(float Speed)
{
	// If the character is walking (speed > threshold), play the walking camera shake
	if (Speed > 10.f) // You can adjust the threshold based on your needs
	{
		PlayCameraShake(WalkCameraShake);
	}
	else
	{
		PlayCameraShake(IdleCameraShake);
	}
}

void APlayerCharacter::HandleJumpCameraShake()
{
	PlayCameraShake(JumpCameraShake);
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMappingContext, 0);
		}
	}

	if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
		Input->BindAction(JumpAction, ETriggerEvent::Started, this, &APlayerCharacter::Jump);
		Input->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
		Input->BindAction(FlashlightAction, ETriggerEvent::Started, this, &APlayerCharacter::ToggleFlashlight);
	}
}

void APlayerCharacter::Move(const FInputActionValue& Value)
{
	FVector2D InputVector = Value.Get<FVector2D>();

	if (IsValid(Controller))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(ForwardDirection, InputVector.Y);
		AddMovementInput(RightDirection, InputVector.X);
	}
}

void APlayerCharacter::Jump()
{
	Super::Jump();
	HandleJumpCameraShake();
}

void APlayerCharacter::Look(const FInputActionValue& Value)
{
	FVector2D InputVector = Value.Get<FVector2D>();

	if (IsValid(Controller))
	{
		AddControllerPitchInput(InputVector.Y);
		AddControllerYawInput(InputVector.X);
	}
}

void APlayerCharacter::ToggleFlashlight()
{
	if (FlashlightComponent)
	{
		bool bIsOn = FlashlightComponent->IsVisible();
		FlashlightComponent->SetVisibility(!bIsOn);
	}
}