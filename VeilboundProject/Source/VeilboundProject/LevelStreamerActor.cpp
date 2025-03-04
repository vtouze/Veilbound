#include "LevelStreamerActor.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"

// Sets default values
ALevelStreamerActor::ALevelStreamerActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapVolume"));
    RootComponent = OverlapVolume;

    OverlapVolume->OnComponentBeginOverlap.AddUniqueDynamic(this, &ALevelStreamerActor::OverlapBegins);

    OverlapVolume->OnComponentEndOverlap.AddUniqueDynamic(this, &ALevelStreamerActor::OverlapEnds);
}
// Called when the game starts or when spawned
void ALevelStreamerActor::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ALevelStreamerActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ALevelStreamerActor::OverlapBegins(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    APlayerCharacter* MyCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

    if (MyCharacter && Cast<APlayerCharacter>(OtherActor) == MyCharacter && LevelToLoad != "")
    {
        FLatentActionInfo LatentInfo;
        UGameplayStatics::LoadStreamLevel(this, LevelToLoad, true, true, LatentInfo);
    }
}

void ALevelStreamerActor::OverlapEnds(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    APlayerCharacter* MyCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

    if (MyCharacter && Cast<APlayerCharacter>(OtherActor) == MyCharacter && LevelToUnload != "")
    {
        FLatentActionInfo LatentInfo;
		UGameplayStatics::UnloadStreamLevel(this, LevelToUnload, LatentInfo, false);
    }
}
