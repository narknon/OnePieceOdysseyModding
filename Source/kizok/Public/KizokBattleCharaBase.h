#pragma once
#include "CoreMinimal.h"
#include "HitMatCurves.h"
#include "Components/SceneComponent.h"
#include "KizokBattleCharaBase.generated.h"

class UKizokBattleActionLoader;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKizokBattleCharaBase : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystem> HitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitMatCurves> HitMatCurvesBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitMatCurves> HitMatCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleActionLoader* ActionLoader;
    
public:
    UKizokBattleCharaBase();
};

