#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokWeaponActor.generated.h"

class USkeletalMeshComponent;
class UKizokMaterialControlComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokWeaponActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachCharaSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DitherFadeMaterialParamName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> MeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> AddMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMaterialControlComponent* MaterialControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultVisibility;
    
public:
    AKizokWeaponActor();
    UFUNCTION(BlueprintCallable)
    void DitherFadeChanged(float dither);
    
};

