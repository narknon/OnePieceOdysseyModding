#pragma once
#include "CoreMinimal.h"
#include "BtlCharaIcon.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleGroupIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleGroupIcon : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UKizokMenuBattleGroupIcon();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispIcon(FBtlCharaIcon Info);
    
    UFUNCTION(BlueprintCallable)
    void SetIconName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupID(int32 group_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HiddenDispIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIconName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroupID() const;
    
};

