#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EKizokCharacterDetailMenuState.h"
#include "ASP_ATTRIBUTE.h"
#include "EKizokSkillUpMenuState.h"
#include "EKizokSkillUpMenuSlotState.h"
#include "KizokSkillUpMenuCharaData.h"
#include "KizokSkillUpMenuSkillWidgetData.h"
#include "KizokSkillUpMenuSkillData.h"
#include "KizokUserWidget.h"
#include "KizokSkillUpMenu.generated.h"

class UKizokButtonWidget;
class UKizokCharacterDetailMenu;
class UPanelWidget;
class UScrollBox;
class UKizokSkillUpButtonWidget;
class UHorizontalBox;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSkillUpMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> CubeButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> TabIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> FlagTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> BattleSkillTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> FieldSkillTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> SkillTypeIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASP_ATTRIBUTE, FSoftObjectPath> SkillAttributeIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokButtonWidget> CubeSetSkillButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkillAttrTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkillTypeTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokSkillUpMenuCharaData> CharaDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokSkillUpMenuSkillWidgetData> CharaSelectSkillButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokSkillUpButtonWidget*> CubeSetSkillButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokCharacterDetailMenu* characterDetailMenu;
    
public:
    UKizokSkillUpMenu();
    UFUNCTION(BlueprintCallable)
    void SetState(EKizokSkillUpMenuState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillTypeIconStartIndex(uint8 InStartIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillTypeIconImageIndex(uint8 InImageIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCubeSetMaterialIndex(uint8 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaTextureStartIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonGroupInputEnable(uint8 InButtonGroupIndex, bool InEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void SaveFocusInfo(float InSaveScrollOffset, bool SkillTabChange);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetPossessCubeOfAllSkil();
    
    UFUNCTION(BlueprintCallable)
    void ReflectCharaInfoInCubeSet();
    
    UFUNCTION(BlueprintCallable)
    void ReflectCharaDetailMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepetitionChangChara();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCubeSetSelectChara(int32 InAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCube(int32 InFocusIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllResetButtonFocus();
    
    UFUNCTION(BlueprintCallable)
    UKizokSkillUpButtonWidget* ManipulateCube(int32 InFocusIndex, bool& OutResult, uint8& OutCubeIndex, bool& OutIsSet, uint8& OutSlotIndex, EKizokSkillUpMenuSlotState& OutSlotState, PLAYER_ID& OutPlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillTabWidget(const UKizokButtonWidget* InButtonWidget) const;
    
    UFUNCTION(BlueprintCallable)
    void InitSkillupMenu(UKizokCharacterDetailMenu* InCharacterDetailMenu, EKizokCharacterDetailMenuState InState, PLAYER_ID InPlayerId, int32 InFocusIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void HiddenUpdateIcon(uint8 InCharaIndex, uint8 InSkillIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetTabIcon(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokSkillUpMenuState GetState() const;
    
private:
    UFUNCTION(BlueprintCallable)
    int32 GetStartFocusIndex();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetSkillTypeIcon(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSkillTabGroupIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillTabFocusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetSkillIconTexture(ASP_ATTRIBUTE InSkillAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokSkillUpMenuSkillData GetSkillData(uint8 InCharaIndex, uint8 InSkillIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoticeDeletePossible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetFlagTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetFieldSkillTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCubeSetSkillButtonGroupIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCubeSetSkillButtonFocusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCubeSetSelectCharaIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokSkillUpButtonWidget* GetCubeSetCubeButtonWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCubeSetCubeButtonNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCubeSetCubeButtonGroupIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCubeSetCubeButtonFocusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokUserWidget* GetCubeSetCubeButtonCursor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaTextureStartIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaTexture(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKizokSkillUpMenuCharaData> GetCharaDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokSkillUpMenuCharaData GetCharaData(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetBattleSkillTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateAllButtonGroup(UHorizontalBox* InSkillTabHorizontalBox, UScrollBox* InCubeSetSkillButtonScrollBox, UKizokButtonWidget* InUniqueButtonWidget, UKizokUserWidget* InCubeSetSkillButtonCursor, UKizokUserWidget* InCubeSetCubeButtonCursor);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCubeSetSkillButtonGroup();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCubeSetCubeButtonGroup(const TArray<UPanelWidget*>& InPanelWidgetArray, int32 InSkillIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ButtonPressedIsAllReset() const;
    
};

