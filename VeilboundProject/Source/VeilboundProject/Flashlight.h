#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Flashlight.generated.h"

UCLASS()
class VEILBOUNDPROJECT_API AFlashlight : public AActor
{
	GENERATED_BODY()

public:
	AFlashlight();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Spot Light Component (Flashlight Beam)
	UPROPERTY(VisibleAnywhere)
	class USpotLightComponent* SpotLight;

	// Flashlight Toggle Function
	void ToggleFlashlight();

private:
	bool bIsOn;
};