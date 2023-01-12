#include "KizokTpsBulletNormal.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "KizokProjectileMovementComponent.h"

AKizokTpsBulletNormal::AKizokTpsBulletNormal() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->projectileComponent = CreateDefaultSubobject<UKizokProjectileMovementComponent>(TEXT("Projectile"));
    this->bulletEffect = NULL;
    this->attackEffect = NULL;
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
}

