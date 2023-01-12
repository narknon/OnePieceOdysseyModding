#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EKizokCharaIconType.h"
#include "BtlMenuSkillInfo.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleRecommendSkill.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleRecommendSkill : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillListDispMaxNum;
    
public:
    UKizokMenuBattleRecommendSkill();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDispListAll(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispList(int32 Index, const FBtlMenuSkillInfo& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCharaFace(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleWBP(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleList(int32 Index, bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReflectDispAll(PLAYER_ID playerID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectColorAnimation(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillList(PLAYER_ID playerID, TArray<FBtlMenuSkillInfo>& OutSkillList);
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetPlayerIconPath(PLAYER_ID playerID, EKizokCharaIconType IconType);
    
};

