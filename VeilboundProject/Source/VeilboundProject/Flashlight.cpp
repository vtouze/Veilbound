#include "Flashlight.h"
#include "Components/SpotLightComponent.h"

AFlashlight::AFlashlight()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create SpotLight component
	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	RootComponent = SpotLight;

	// Default Flashlight Properties
	SpotLight->SetIntensity(5000.0f);
	SpotLight->SetLightColor(FLinearColor::White);
	SpotLight->SetInnerConeAngle(25.0f);
	SpotLight->SetOuterConeAngle(45.0f);
	SpotLight->SetAttenuationRadius(1200.0f);
	SpotLight->SetVisibility(false);  // Start turned OFF

	bIsOn = false;
}

void AFlashlight::BeginPlay()
{
	Super::BeginPlay();
}

void AFlashlight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Toggle Flashlight Function
void AFlashlight::ToggleFlashlight()
{
	bIsOn = !bIsOn;
	SpotLight->SetVisibility(bIsOn);
}