#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "BtlResultLevelUpDisp.h"
#include "BtlResultLevelUpInfo.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleResultLevelUp.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleResultLevelUp : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, FSoftObjectPath> CharaPauseIconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispWaitState;
    
public:
    UKizokMenuBattleResultLevelUp();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispWBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateDispLevelUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLevelUpAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetLevelUpInfo(const TArray<FBtlResultLevelUpInfo>& chara_list);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDispWaitState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayLevelUpVoice(PLAYER_ID PLAYER_ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NextLevelUpAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitState();
    
    UFUNCTION(BlueprintCallable)
    bool IsExsistLevelUpList();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetLevelUpListNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlResultLevelUpDisp GetCurrentDispData() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetCharaImage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaIconPath(PLAYER_ID PLAYER_ID) const;
    
};

