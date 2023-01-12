#include "KizokCharacterCollisionActor.h"
#include "Components/CapsuleComponent.h"

AKizokCharacterCollisionActor::AKizokCharacterCollisionActor() {
    this->m_pCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));
    this->bLookAtTargetEnable = true;
}

