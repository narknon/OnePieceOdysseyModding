#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "KizokPlayerBase.h"
#include "KizokNewBattlePlayerBase.generated.h"

class UKizokBattleCharaBase;
class AKizokNewBattlePlayerBase;
class UMaterialInstance;

UCLASS(Blueprintable)
class KIZOK_API AKizokNewBattlePlayerBase : public AKizokPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PLAYER_ID chID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutBlendTime4Damage2Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutBlendTime4Getup2Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutBlendTime4Damage2Sick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutBlendTime4Getup2Sick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherFadeRange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleCharaBase* BattleCharaBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKizokNewBattlePlayerBase*> Elder;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstance*> HideStrawHatMaterial;
    
    AKizokNewBattlePlayerBase();
    UFUNCTION(BlueprintCallable)
    void OnCostumeLoadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void HideStrawHat();
    
    UFUNCTION(BlueprintCallable)
    void HideLogPose();
    
};

