#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AilmentEffect.h"
#include "MatCurve.h"
#include "KizokPlayerWeaponParam.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "KizokActorBase.h"
#include "KizokCharaBase.generated.h"

class UKizokEffectFootprintsControl;
class AKizokWeaponActor;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class KIZOK_API AKizokCharaBase : public AKizokActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokEffectFootprintsControl* FootprintsControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokEffectFootprintsControl> FootControlClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKizokWeaponActor*> WeaponActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokPlayerWeaponParam> AttachWeaponParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetPosBattleUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BtlTargetCursorRefBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BtlTargetCursorOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynMaterials;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_LoadWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector tmpLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator tmpRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAilmentEffect> AilmentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatCurve> MaterialCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAilmentEffect> RegLoopEffects;
    
public:
    AKizokCharaBase();
    UFUNCTION(BlueprintCallable)
    void PlayLipSync(float Time);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachWeapon(UClass* WeaponBP, const FName& socket, float Scale);
    
};

