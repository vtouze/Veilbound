// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "LevelStreamerActor.generated.h"

UCLASS()
class VEILBOUNDPROJECT_API ALevelStreamerActor : public AActor
{
	GENERATED_BODY()

	// Overlap volume to trigger level streaming
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* OverlapVolume;
	
public:	
	// Sets default values for this actor's properties
	ALevelStreamerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OverlapBegins(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OverlapEnds(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere)
	FName LevelToLoad;

	UPROPERTY(EditAnywhere)
	FName LevelToUnload;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};