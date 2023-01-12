#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "KizokBattleStatusCheckCancelDelegate.h"
#include "BtlMenuDispStatus.h"
#include "BtlMenuStatusCheckParam.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleStatusCheck.generated.h"

class UKizokUserWidget;
class AKizokNewBattleMode;
class UKizokMenuBattleMain;
class UGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleStatusCheck : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattleStatusCheckCancel OnStatusCheckCancel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StautsIndexMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurSelectButtonGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlMenuStatusCheckParam> StatusList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, FSoftObjectPath> CharaIconPath;
    
public:
    UKizokMenuBattleStatusCheck();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatus(int32 Index, FBtlMenuDispStatus Param);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDescText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEmptyDispStatus(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaIconPath(AKizokNewBattleMode* BattleMode);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromGridPanel(UGridPanel* InGridPanel, int32 InColumnNum, int32 InRowNum, UKizokUserWidget* InCursorWidget, int32 InFocusIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWindow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitSetting();
    
    UFUNCTION(BlueprintCallable)
    TArray<PLAYER_ID> GetMainPartyList();
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetCharaImagePath(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
};

