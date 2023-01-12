#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokWidgetPriority.h"
#include "EKizokAchievementSaveDataType.h"
#include "EKizokItemGetAvailabilityPattern.h"
#include "EKizokOpenFeature.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KizokSystemFunctionLibrary.generated.h"

class UObject;
class USceneComponent;
class UKPIManager;
class USkeletalMeshComponent;
class UKizokAccessoryManager;
class UKizokAchievementManager;
class UKizokBonusManager;
class UKizokCeBankPlayTime;
class UKizokEachRegionWarpSound;
class UKizokEachRegionSoundControl;
class UKizokDLCManager;
class UKizokEntryLoader;
class AKizokFieldNPCCharacter;
class UKizokFieldManager;
class UKizokFieldEnemyManager;
class UKizokKeyMappingManager;
class UKizokItemManager;
class UKizokGlobalValue;
class UKizokGlobalResources;
class UKizokGlobalDataTable;
class UKizokMapManager;
class UKizokLvsManager;
class UKizokLocalizationDataTableManager;
class UKizokLoadingWidget;
class UKizokEachRegionMessageTable;
class UKizokMessageBattleTable;
class UKizokSaveData;
class UKizokRevivalTimerCollector;
class UKizokShopStockManager;
class UKizokTravelManager;
class UKizokWidgetCommonParam;
class UDataTable;
class UDirectionalLightComponent;
class ULevelStreamingDynamic;
class UWorld;

UCLASS(Blueprintable)
class KIZOK_API UKizokSystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKizokSystemFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WriteAchievementAndLogGetItem(const UObject* WorldContextObject, const int32 CharacterID, const FName& ItemName, const int32 itemCount, const EKizokItemGetAvailabilityPattern availabilityPattern);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WriteAchievementAndLogCostumeChange(const UObject* WorldContextObject, const int32 CharacterID, const int32 CostumeID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WriteAchievementAndLog(const UObject* WorldContextObject, const EKizokAchievementSaveDataType SaveDataType, const int32 Value, const FName LimitParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopCurrentBGM(const UObject* WorldContextObject, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void StopCSLoopSound(float Time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopCSGTProfile(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopBGM(const UObject* WorldContextObject, int32 Handle, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopAreaSound(const UObject* WorldContextObject, float fade_out_time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopAnySound(const UObject* WorldContextObject, int32 Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartSequencer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartMeasurePlayTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartCSGTProfile(const FString& ID, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartCSGTDebugPlay(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetViewDistanceScaleSecondaryScale(const UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetViewDistanceScaleApplySecondaryScale(const UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVectorFlagByFName(const UObject* WorldContextObject, FName Name, FVector Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetStringFlagByFName(const UObject* WorldContextObject, FName Name, const FString& Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSoundVolumeByCategory(const UObject* WorldContextObject, FName Category, float Volume, float Time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSoundVolume(const UObject* WorldContextObject, int32 Handle, float Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSoundPositionByCategory(const UObject* WorldContextObject, FName Category, FVector Position);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSoundPosition(const UObject* WorldContextObject, int32 Handle, FVector Position);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSoundMasterVoiceVolume(const UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSoundMasterSeVolume(const UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSoundMasterBgmVolume(const UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShowFirstSettingMenu(const UObject* WorldContextObject, bool bInShowFirstSettingMenu);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShowDLCDialog(const UObject* WorldContextObject, bool bInShowDLCDialog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShadowDistanceScaleFromSequencer(const UObject* WorldContextObject, float InShadowDistanceScale);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRotatorFlagByFName(const UObject* WorldContextObject, FName Name, FRotator Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayingDLC01(const UObject* WorldContextObject, const bool bIsPlayingDLC01);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetOpenKeyAssignUI(const UObject* WorldContextObject, bool bInOpen);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetOcclusionSlop(const UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMiniMapRotate(const UObject* WorldContextObject, bool bInRotate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainStoryGuideIndex(const UObject* WorldContextObject, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLvsNoUnloadUntilPlayerLanding_D007(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIsPlayedActivity(const UObject* WorldContextObject, bool bIsPlayed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIsClearData(const UObject* WorldContextObject, bool bInIsClearData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInt32FlagByFName(const UObject* WorldContextObject, FName Name, int32 Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalVector(const UObject* WorldContextObject, const FName Key, FVector Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalString(const UObject* WorldContextObject, const FName Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalRotator(const UObject* WorldContextObject, const FName Key, FRotator Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalFloat(const UObject* WorldContextObject, const FName Key, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobaInteger(const UObject* WorldContextObject, const FName Key, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGammaValueNo(const UObject* WorldContextObject, uint8 GammaValueNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFoliageLODDistanceScale(const UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFloatFlagByFName(const UObject* WorldContextObject, FName Name, float Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetExpandAllOcclusionTestedBBoxesAmount(const UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEpisodeSeqSaveKeyName(const UObject* WorldContextObject, FName KeyName, int32 seqOffset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEpisodeSeq(const UObject* WorldContextObject, int32 Seq);
    
    UFUNCTION(BlueprintCallable)
    static void SetDistanceFieldShadowEnableForCS(UDirectionalLightComponent* DirectionalLightComponent, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetDistanceFieldShadowDistanceForCS(UDirectionalLightComponent* DirectionalLightComponent, float Distance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCameraUDReverse(const UObject* WorldContextObject, bool bInReverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCameraLRReverse(const UObject* WorldContextObject, bool bInReverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCameraAutoCorrection(const UObject* WorldContextObject, bool bInAutoCorrection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetBoolFlagByFName(const UObject* WorldContextObject, FName Name, bool Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAutoDash(const UObject* WorldContextObject, bool bInAutoDash);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAreaSoundVolume(const UObject* WorldContextObject, float Volume, float Time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAllowOcclusionQueries(const UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAgreedPPVersion(const UObject* WorldContextObject, int32 InVersion);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAgreedEULA(const UObject* WorldContextObject, bool bInAgreed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAgreedCeBankVersion(const UObject* WorldContextObject, int32 InVersion);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAgreedCeBank(const UObject* WorldContextObject, bool bInAgreed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SaveAutoSaveData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreViewDistanceScaleSecondaryScale(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreViewDistanceScaleApplySecondaryScale(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreTonemapperVariables(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreOcclusionSlop(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreFoliageLODDistanceScale(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreExpandAllOcclusionTestedBBoxesAmount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreAllowOcclusionQueries(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool ReimportDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterAchievements(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshAnimForGT(AKizokFieldNPCCharacter* fieldNpcCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlaySurroundCommonBank(const UObject* WorldContextObject, FName CueName, FVector Position);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlayCommonJingle(const UObject* WorldContextObject, FName CueName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlayCommonBank(const UObject* WorldContextObject, FName CueName, bool bAcrossLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlayBgm(const UObject* WorldContextObject, FName CueName, float FadeInTime, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlayAttachedCommonBank(const UObject* WorldContextObject, FName CueName, USceneComponent* Parent, FName SocketName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PlayAreaSound(const UObject* WorldContextObject, FName RoomId, float fade_in_time, float fade_out_time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyLoadUtageSeq(const UObject* WorldContextObject, FName UtageName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyFinishTitleMovie(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyEndUtageSeq(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyEndReloadSublevels(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyEndCamp(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyBeginReloadSublevels(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyBeginDebugRoom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyBeginCamp(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyBackToPlayableFromCampSakabaCS(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* LoadLevelInstanceDevelopmentOnly(UObject* WorldContextObject, const FString& LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtrDevelopmentOnly(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LoadAutoSaveData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsShowFirstSettingMenu(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsShowDLCDialog(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsReleasedDLC(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPurchasedDLC(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingMainStory(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingDLC01(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayAreaSound(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsOpenKeyAssignUI(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOpenFeature(const UObject* WorldContextObject, EKizokOpenFeature InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNextGen();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsMiniMapRotate(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsForceResetNPCPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFastTravelFromLoadMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableTimezoneLcokForDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemoVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsClearData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCharaMoveLRReverse(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCharaMoveFBReverse(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCameraUDReverse(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCameraLRReverse(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCameraAutoCorrection(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAutoDash(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAgreedEULA(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAgreedCeBank(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokWidgetCommonParam* GetWidgetCommonParam(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetVectorFlagByFName(const UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokTravelManager* GetTravelManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FText> GetTitleMenu(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetStringFlagByFName(const UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSoundVolume(const UObject* WorldContextObject, int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    static float GetSoundPlayLength(int32 Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSoundMasterVoiceVolume(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSoundMasterSeVolume(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSoundMasterBgmVolume(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokShopStockManager* GetShopStockManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokSaveData* GetSaveData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FRotator GetRotatorFlagByFName(const UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokRevivalTimerCollector* GetRevivalTimerCollector(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetQuestMapSymbols(TArray<FName>& mapSymbols, FName QuestId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPPVersion(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTimespan GetPlayTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetPlayingDLCId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokMessageBattleTable* GetMessageBattleTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokMapManager* GetMapManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetMainStoryRowName(const UObject* WorldContextObject, int32 InEpisodeFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMainStoryGuideIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetMainIconMapSymbols(TArray<FName>& outMapSymbols, int32 Seq);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokLvsManager* GetLvsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLogSaveDataValue(const UObject* WorldContextObject, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokLocalizationDataTableManager* GetLocalizationDataTableManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokLoadingWidget* GetLoadingWidget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKPIManager* GetKPIManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokKeyMappingManager* GetKeyMappingManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokItemManager* GetItemManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsPlayedActivity(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetInt32FlagByFName(const UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetGlobalVector(const UObject* WorldContextObject, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokGlobalValue* GetGlobalValue(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetGlobalString(const UObject* WorldContextObject, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FRotator GetGlobalRotator(const UObject* WorldContextObject, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokGlobalResources* GetGlobalResources(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetGlobalInteger(const UObject* WorldContextObject, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGlobalFloat(const UObject* WorldContextObject, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokGlobalDataTable* GetGlobalDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetGammaValueNoMax(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetGammaValueNo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetGammaValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetFloatFlagByFName(const UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTimespan GetFieldPlayTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokFieldManager* GetFieldManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokFieldEnemyManager* GetFieldEnemyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetEpisodeSeq(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetEpisodeIdBySeq(FName& outEpisodeId, bool& bIsValid, int32 Seq);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetEpisodeFlagConditionDLC(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetEpisodeFlag(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokEntryLoader* GetEntryLoader(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokEachRegionWarpSound* GetEachRegionWarpSound(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokEachRegionSoundControl* GetEachRegionSoundControl(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokEachRegionMessageTable* GetEachRegionMessageTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokDLCManager* GetDLCManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetCurrentBGMName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCeBankVersion(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokCeBankPlayTime* GetCeBankPlayTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetBoolFlagByFName(const UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokBonusManager* GetBonusManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetApplicationVersionText();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllTravelMapSymbols();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllMainIconMapSymbols();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetAgreedPPVersion(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetAgreedCeBankVersion(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetAchievementSaveDataValue(const UObject* WorldContextObject, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokAchievementManager* GetAchievementManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKizokAccessoryManager* GetAccessoryManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FinishedSequencer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FinishCSGTDebugPlay(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FadeOutCurrentBGM(const UObject* WorldContextObject, float Time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FadeOutBGM(const UObject* WorldContextObject, int32 Handle, float Time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndMeasurePlayTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisableTonemapperVariables(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyLetterBox();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateLetterBox(const UObject* WorldContextObject, EKizokWidgetPriority InPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ClearDataExists(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AreaSoundStart(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AreaSoundPause(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyOptimizationForCrowdAnim(USkeletalMeshComponent* Mesh);
    
};

