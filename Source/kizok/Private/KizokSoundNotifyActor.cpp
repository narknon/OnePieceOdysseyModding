#include "KizokSoundNotifyActor.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokSoundNotifyActor::SoundDeleteOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokSoundNotifyActor::SoundCreateOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokSoundNotifyActor::AKizokSoundNotifyActor() {
    this->IsPickUpNearSound = false;
    this->SoundFadeOutTime = 2.00f;
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
    this->SoundList = CreateDefaultSubobject<USceneComponent>(TEXT("Sound List"));
    this->Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
}

