#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "PLAYER_ID.h"
#include "EBtlMenuSystemMesType.h"
#include "BtlMenuArtsSkill.h"
#include "BtlMenuDetailArts.h"
#include "BtlDispArtsList.h"
#include "UObject/NoExportTypes.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleArtsSelect.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UScrollBox;
class UKizokMenuBattleMain;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleArtsSelect : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> KizunaArtsListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlMenuArtsSkill> DebugArtsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ArtsListPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> CreatedArtsWidgetList;
    
public:
    UKizokMenuBattleArtsSelect();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispListAll();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDetailMenu();
    
    UFUNCTION(BlueprintCallable)
    void ShowSystemMessage(EBtlMenuSystemMesType InMessageType);
    
    UFUNCTION(BlueprintCallable)
    void SelectedArts();
    
    UFUNCTION(BlueprintCallable)
    void RegisterArtsListFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectDetailMenu(const FBtlMenuDetailArts& Param);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWindow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OffsetListPos(UKizokButtonWidget* InButtonWidget, FVector2D InOffsetPos);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsableFocusList(EBtlMenuSystemMesType& OutMessageType);
    
    UFUNCTION(BlueprintCallable)
    void InitArtsList();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetDispArtsListParam(int32 InIndex, FBtlDispArtsList& OutListParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    PLAYER_ID GetCurPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool GetCurArtsListParam(FBtlMenuArtsSkill& OutListParam);
    
    UFUNCTION(BlueprintCallable)
    void ExecKizunaArts();
    
    UFUNCTION(BlueprintCallable)
    void CreateArtsList(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable)
    void ConvertArtsDispList(const FBtlMenuArtsSkill& InArtsParam, FBtlDispArtsList& OutDispList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
    UFUNCTION(BlueprintCallable)
    void Closed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearArtsList(int32 InDispNum);
    
};

