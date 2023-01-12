#pragma once
#include "CoreMinimal.h"
#include "FieldNPCWeaponParam.h"
#include "Components/ActorComponent.h"
#include "KizokWeaponActorComponent.generated.h"

class UKizokSkeletalMeshComponent;
class AKizokWeaponActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokWeaponActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AKizokWeaponActor>> Weapons;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UKizokSkeletalMeshComponent> OwnerMesh;
    
public:
    UKizokWeaponActorComponent();
    UFUNCTION(BlueprintCallable)
    void CreateWeaponInfo(UPARAM(Ref) TArray<FFieldNPCWeaponParam>& Info);
    
};

