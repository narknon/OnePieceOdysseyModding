#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "KizokCheatManager.generated.h"

class UKizokCheatStatus;
class UKizokCheatPresetItem;
class UKizokValidMessageTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokCheatStatus* cheatStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokCheatPresetItem* cheatPresetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokValidMessageTable* validMessageTable;
    
public:
    UKizokCheatManager();
private:
    UFUNCTION(Exec)
    void WriteAchievementAndLog(uint32 InSaveDataType, int32 InValue, FName InLimitParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ValidMsgTable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnloadLevelSetAssets(FName LevelSetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnloadExperimentalAssets(const FString& Filter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchConnectMouse();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchConnectKeyboard();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchConnectGamepad();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopDecitionInputSimulation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StatLvs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StatFade();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMeasurePlayTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartDecitionInputSimulation(float intervalSec);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateStreamingWait(bool bWait);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowLogSaveDataValue(FName InKey);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAchievementSaveDataValue(FName InKey);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetTalkWindowVisibleDebug(bool bIsVisible);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetTalkWindowVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSubLevelVisible(const FString& Name, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSmoothFrameRateMax(float FrameRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSkipWidgetLogEnable(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetResolutionScale(float NewScale, bool IsMath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReleasedDLCFlag(bool bInReleased);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPurchasedDLCFlag(bool bInPurchased);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPPVersion(int32 InVersion);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayingDLC01Flag(const bool bInPlayingDLC01);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayetTickable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNPCVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNPCTickable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetIsDiskSpaceFull(bool IsSpaceFull);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFramerateLimit(float Limit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEnableVerifyGC(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEnableDebugInfo(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEnableButtonIcon(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEditorDebugPlatform(const FString& InPlatformName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDynamicResoEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugDLCUIDisable(bool bInDisable);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetCulture(const FString& InCulture);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetCeBankVersion(int32 InVersion);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBonusType(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAspect(int32 X, int32 Y, int32 W);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAnimTickAlwaysForce();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAnimTickAlways(bool bIsAlways);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RestoreFieldVisibleForBattle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievementProgress();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayNpcAnimMontageSection(FName Name);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void OutLogSearchParentClassBP(const FString& InFolderPath, const FString& SearchBPName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OutLog_DataTableStructerList(const FString& InFolderPath);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void LvsWillBeVisibled(const FString& lvsSetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LvsWillBeLoaded(const FString& lvsSetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LvsVisible(const FString& LevelSetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LvsUnload(const FString& LevelSetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LvsLoad(const FString& LevelSetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LvsInvisible(const FString& LevelSetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoggingSteamLanguage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadNcessaryPersistentAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadLevelSetAssets(FName LevelSetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadingWidgetTimeUpdateEnable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadExperimentalAssets(const FString& Filter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IsBusyFieldVisibleFunc();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRevision() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetMainStoryTableRowNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokCheatStatus* GetCheatStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokCheatPresetItem* GetCheatPresetItem() const;
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ForceGC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndMeasurePlayTime();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void EnableParallelNotation(const FString& InCulture);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpLoadedSubLevels();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DispSmoothFrameRate();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DispScreenSettings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableParallelNotation();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void CheckInputTypeForHandle();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void CheckFastTravelSaveData(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDiskFreeSpace(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDemoVersion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeOrAddActionMapping(const FName& InActionMappingName, const FName& InKeyName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeCostumeSavekey(const FString& BPName, uint8 CostumeID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeCostume(const FString& BPName, const FString& BPKind, uint8 CostumeID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyFieldVisibleForBattle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddActionMapping(const FName& InActionMappingName, const FName& InKeyName);
    
};

