#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EKizokCharacterDetailMenuState.h"
#include "ASP_ATTRIBUTE.h"
#include "KizokCharacterDetailMenuCharaData.h"
#include "KizokMainMenuPage.h"
#include "KizokCharacterDetailMenu.generated.h"

class UKizokButtonWidget;
class AKizokCaptureRoom;
class UScrollBox;
class UKizokPlayerNameWidget;
class UKizokSkillButtonWidget;
class UCanvasPanel;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCharacterDetailMenu : public UKizokMainMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokSkillButtonWidget*> BattleSkillButtonWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokSkillButtonWidget*> FieldSkillButtonWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> KizunaArtsButtonWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UScrollBox*> ScrollBoxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* KizunaArtsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> BattleSkillTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> FieldSkillTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> KizunaArtsTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASP_ATTRIBUTE, FSoftObjectPath> SkillAttrIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokSkillButtonWidget> SkillButtonWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> KizunaArtsButtonWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkillAttrTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkillTypeTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharaBookTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharaBookTextTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CostumeTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharaDetailTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokCaptureRoom* CaptureRoom;
    
public:
    UKizokCharacterDetailMenu();
    UFUNCTION(BlueprintCallable)
    void UpdateScrollBoxVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetState(EKizokCharacterDetailMenuState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillButtonGroupInputEnable(bool InInputEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectCharaPlayerId(PLAYER_ID InPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetKizunaArtsButtonGroupInputEnable(bool InInputEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsModeChange(bool bInIsModeChange);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReflectCharaIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveFocusInfo(int32 InButtonGroupIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    UKizokPlayerNameWidget* ReplacementPlayerNameWidget(UCanvasPanel* InCanvasPanel, UKizokPlayerNameWidget* InWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterSkillButtonGroup();
    
    UFUNCTION(BlueprintCallable)
    void RegisterKizunaArtsButtonGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepetitionChangChara();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectInfo(EKizokCharacterDetailMenuState InState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelectChara(int32 InAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppearModel(EKizokCharacterDetailMenuState InState);
    
    UFUNCTION(BlueprintCallable)
    void NextStep();
    
    UFUNCTION(BlueprintCallable)
    void LoadModel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModeChange() const;
    
    UFUNCTION(BlueprintCallable)
    void InitSkillButtonGroup(TArray<UScrollBox*> InScrollBoxList, UScrollBox* InKizunaArtsScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void InitSelectChara(uint8 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void HiddenUpdateIcon(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HiddenKizunaArtsUpdateIcon(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokCharacterDetailMenuState GetState() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillDataIndex(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetSkillAttrIcon(ASP_ATTRIBUTE InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectCharaIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoticeDeletePossible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetKizunaArtsTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKizunaArtsButtonGroupFocusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetFieldSkillTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCubeHiddenFlg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCharaDataNum() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokCharacterDetailMenuCharaData GetCharaData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetButtonGroupFocusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetBattleSkillTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void CompletedTextureStreaming();
    
    UFUNCTION(BlueprintCallable)
    void CompletedModelLoading();
    
    UFUNCTION(BlueprintCallable)
    void AppearModel();
    
};

