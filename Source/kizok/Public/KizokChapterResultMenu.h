#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EKizokChapterResultState.h"
#include "EKizokChapterResultSkillCubeType.h"
#include "KizokChapterResultSkillCubeData.h"
#include "KizokChapterResultAcceFrameData.h"
#include "KizokChapterResultSkillWidgetData.h"
#include "KizokUserWidget.h"
#include "KizokChapterResultMenu.generated.h"

class UUserWidget;
class UKizokButtonWidget;
class UScrollBox;
class UVerticalBox;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokChapterResultMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> CharaWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokUserWidget> SkillWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> SkillIconPath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> CharaWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokChapterResultSkillWidgetData> SkillWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaBodyImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AcceFrameDataTable;
    
public:
    UKizokChapterResultMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void SkipSkillMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSkillData(UKizokUserWidget* InWidget, const FText& InSkillName, PLAYER_ID InPlayerId, bool InIsNew, bool InIsBattleSkill, const FKizokChapterResultSkillCubeData& Rank1, const FKizokChapterResultSkillCubeData& Rank2, const FKizokChapterResultSkillCubeData& Rank3);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetScrollLength(float InScrollLength);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayAnimationFlag(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNextSkillChara();
    
    UFUNCTION(BlueprintCallable)
    bool SetNextInSkillWidget();
    
    UFUNCTION(BlueprintCallable)
    bool SetNextInCharaWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterVerticalBox(uint8 Index, UVerticalBox* InVerticalBox);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLoopAnimationWidget(UUserWidget* InWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NextChara();
    
    UFUNCTION(BlueprintCallable)
    void NextAcceFrameCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayAnimationFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFixAcceFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitSetAcceFrameEvent();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeChapterResult(UScrollBox* InScrollBox);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetSkillIconPath(uint8 Index) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokChapterResultSkillCubeType GetSkillCubeType(int32 InCharaIndex, int32 InSkillIndex, uint8 InCubeNum) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayerID(int32 Index) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKizokChapterResultSkillCubeData> GetNowSkillCubeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetNowCharaWidgetIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokChapterResultAcceFrameData GetNowAcceFrameData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokChapterResultState GetMenuState() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSkipSkillMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaImage(uint8 playerID) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishSkillRelease();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndSkillReleaseEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndAcceFrameEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void DoFixProduction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeFixAcceFrameChara(int32 InAdd);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAcceFrame();
    
    UFUNCTION(BlueprintCallable)
    void AddReleaseSkill(FName InSkillId, uint8 InRank);
    
};

