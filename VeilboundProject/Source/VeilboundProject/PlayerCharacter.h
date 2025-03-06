#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Camera/CameraShakeBase.h"  // Include the camera shake base class
#include "PlayerCharacter.generated.h"

UCLASS()
class VEILBOUNDPROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	class USpotLightComponent* FlashlightComponent;

	// Camera shake references
	UPROPERTY(EditAnywhere, Category = "Camera Shake")
	TSubclassOf<UCameraShakeBase> IdleCameraShake;

	UPROPERTY(EditAnywhere, Category = "Camera Shake")
	TSubclassOf<UCameraShakeBase> WalkCameraShake;

	UPROPERTY(EditAnywhere, Category = "Camera Shake")
	TSubclassOf<UCameraShakeBase> JumpCameraShake;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovementSpeed = 600.0f;

protected:
	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputMappingContext* InputMappingContext;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* FlashlightAction;

public:
	APlayerCharacter();

	// Function to trigger camera shakes
	void PlayCameraShake(TSubclassOf<UCameraShakeBase> CameraShakeClass);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void Move(const FInputActionValue& Value);
	void Jump();
	void Look(const FInputActionValue& Value);

	void ToggleFlashlight();

	// Camera shake handling
	void HandleMovementCameraShake(float Speed);
	void HandleJumpCameraShake();
};