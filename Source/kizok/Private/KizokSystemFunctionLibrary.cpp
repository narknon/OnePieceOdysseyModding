#include "KizokSystemFunctionLibrary.h"

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

void UKizokSystemFunctionLibrary::WriteAchievementAndLogGetItem(const UObject* WorldContextObject, const int32 CharacterID, const FName& ItemName, const int32 itemCount, const EKizokItemGetAvailabilityPattern availabilityPattern) {
}

void UKizokSystemFunctionLibrary::WriteAchievementAndLogCostumeChange(const UObject* WorldContextObject, const int32 CharacterID, const int32 CostumeID) {
}

void UKizokSystemFunctionLibrary::WriteAchievementAndLog(const UObject* WorldContextObject, const EKizokAchievementSaveDataType SaveDataType, const int32 Value, const FName LimitParam) {
}

void UKizokSystemFunctionLibrary::StopCurrentBGM(const UObject* WorldContextObject, float FadeOutTime) {
}

void UKizokSystemFunctionLibrary::StopCSLoopSound(float Time) {
}

void UKizokSystemFunctionLibrary::StopCSGTProfile(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::StopBGM(const UObject* WorldContextObject, int32 Handle, float FadeOutTime) {
}

void UKizokSystemFunctionLibrary::StopAreaSound(const UObject* WorldContextObject, float fade_out_time) {
}

void UKizokSystemFunctionLibrary::StopAnySound(const UObject* WorldContextObject, int32 Handle) {
}

void UKizokSystemFunctionLibrary::StartSequencer(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::StartMeasurePlayTime(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::StartCSGTProfile(const FString& ID, const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::StartCSGTDebugPlay(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::SetViewDistanceScaleSecondaryScale(const UObject* WorldContextObject, float Value) {
}

void UKizokSystemFunctionLibrary::SetViewDistanceScaleApplySecondaryScale(const UObject* WorldContextObject, int32 Value) {
}

void UKizokSystemFunctionLibrary::SetVectorFlagByFName(const UObject* WorldContextObject, FName Name, FVector Data) {
}

void UKizokSystemFunctionLibrary::SetStringFlagByFName(const UObject* WorldContextObject, FName Name, const FString& Data) {
}

void UKizokSystemFunctionLibrary::SetSoundVolumeByCategory(const UObject* WorldContextObject, FName Category, float Volume, float Time) {
}

void UKizokSystemFunctionLibrary::SetSoundVolume(const UObject* WorldContextObject, int32 Handle, float Volume) {
}

void UKizokSystemFunctionLibrary::SetSoundPositionByCategory(const UObject* WorldContextObject, FName Category, FVector Position) {
}

void UKizokSystemFunctionLibrary::SetSoundPosition(const UObject* WorldContextObject, int32 Handle, FVector Position) {
}

void UKizokSystemFunctionLibrary::SetSoundMasterVoiceVolume(const UObject* WorldContextObject, float Value) {
}

void UKizokSystemFunctionLibrary::SetSoundMasterSeVolume(const UObject* WorldContextObject, float Value) {
}

void UKizokSystemFunctionLibrary::SetSoundMasterBgmVolume(const UObject* WorldContextObject, float Value) {
}

void UKizokSystemFunctionLibrary::SetShowFirstSettingMenu(const UObject* WorldContextObject, bool bInShowFirstSettingMenu) {
}

void UKizokSystemFunctionLibrary::SetShowDLCDialog(const UObject* WorldContextObject, bool bInShowDLCDialog) {
}

void UKizokSystemFunctionLibrary::SetShadowDistanceScaleFromSequencer(const UObject* WorldContextObject, float InShadowDistanceScale) {
}

void UKizokSystemFunctionLibrary::SetRotatorFlagByFName(const UObject* WorldContextObject, FName Name, FRotator Data) {
}

void UKizokSystemFunctionLibrary::SetPlayingDLC01(const UObject* WorldContextObject, const bool bIsPlayingDLC01) {
}

void UKizokSystemFunctionLibrary::SetOpenKeyAssignUI(const UObject* WorldContextObject, bool bInOpen) {
}

void UKizokSystemFunctionLibrary::SetOcclusionSlop(const UObject* WorldContextObject, float Value) {
}

void UKizokSystemFunctionLibrary::SetMiniMapRotate(const UObject* WorldContextObject, bool bInRotate) {
}

void UKizokSystemFunctionLibrary::SetMainStoryGuideIndex(const UObject* WorldContextObject, int32 InIndex) {
}

void UKizokSystemFunctionLibrary::SetLvsNoUnloadUntilPlayerLanding_D007(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::SetIsPlayedActivity(const UObject* WorldContextObject, bool bIsPlayed) {
}

void UKizokSystemFunctionLibrary::SetIsClearData(const UObject* WorldContextObject, bool bInIsClearData) {
}

void UKizokSystemFunctionLibrary::SetInt32FlagByFName(const UObject* WorldContextObject, FName Name, int32 Data) {
}

void UKizokSystemFunctionLibrary::SetGlobalVector(const UObject* WorldContextObject, const FName Key, FVector Value) {
}

void UKizokSystemFunctionLibrary::SetGlobalString(const UObject* WorldContextObject, const FName Key, const FString& Value) {
}

void UKizokSystemFunctionLibrary::SetGlobalRotator(const UObject* WorldContextObject, const FName Key, FRotator Value) {
}

void UKizokSystemFunctionLibrary::SetGlobalFloat(const UObject* WorldContextObject, const FName Key, float Value) {
}

void UKizokSystemFunctionLibrary::SetGlobaInteger(const UObject* WorldContextObject, const FName Key, int32 Value) {
}

void UKizokSystemFunctionLibrary::SetGammaValueNo(const UObject* WorldContextObject, uint8 GammaValueNo) {
}

void UKizokSystemFunctionLibrary::SetFoliageLODDistanceScale(const UObject* WorldContextObject, float Value) {
}

void UKizokSystemFunctionLibrary::SetFloatFlagByFName(const UObject* WorldContextObject, FName Name, float Data) {
}

void UKizokSystemFunctionLibrary::SetExpandAllOcclusionTestedBBoxesAmount(const UObject* WorldContextObject, float Value) {
}

void UKizokSystemFunctionLibrary::SetEpisodeSeqSaveKeyName(const UObject* WorldContextObject, FName KeyName, int32 seqOffset) {
}

void UKizokSystemFunctionLibrary::SetEpisodeSeq(const UObject* WorldContextObject, int32 Seq) {
}

void UKizokSystemFunctionLibrary::SetDistanceFieldShadowEnableForCS(UDirectionalLightComponent* DirectionalLightComponent, bool bEnable) {
}

void UKizokSystemFunctionLibrary::SetDistanceFieldShadowDistanceForCS(UDirectionalLightComponent* DirectionalLightComponent, float Distance) {
}

void UKizokSystemFunctionLibrary::SetCameraUDReverse(const UObject* WorldContextObject, bool bInReverse) {
}

void UKizokSystemFunctionLibrary::SetCameraLRReverse(const UObject* WorldContextObject, bool bInReverse) {
}

void UKizokSystemFunctionLibrary::SetCameraAutoCorrection(const UObject* WorldContextObject, bool bInAutoCorrection) {
}

void UKizokSystemFunctionLibrary::SetBoolFlagByFName(const UObject* WorldContextObject, FName Name, bool Data) {
}

void UKizokSystemFunctionLibrary::SetAutoDash(const UObject* WorldContextObject, bool bInAutoDash) {
}

void UKizokSystemFunctionLibrary::SetAreaSoundVolume(const UObject* WorldContextObject, float Volume, float Time) {
}

void UKizokSystemFunctionLibrary::SetAllowOcclusionQueries(const UObject* WorldContextObject, int32 Value) {
}

void UKizokSystemFunctionLibrary::SetAgreedPPVersion(const UObject* WorldContextObject, int32 InVersion) {
}

void UKizokSystemFunctionLibrary::SetAgreedEULA(const UObject* WorldContextObject, bool bInAgreed) {
}

void UKizokSystemFunctionLibrary::SetAgreedCeBankVersion(const UObject* WorldContextObject, int32 InVersion) {
}

void UKizokSystemFunctionLibrary::SetAgreedCeBank(const UObject* WorldContextObject, bool bInAgreed) {
}

bool UKizokSystemFunctionLibrary::SaveAutoSaveData(const UObject* WorldContextObject) {
    return false;
}

void UKizokSystemFunctionLibrary::RestoreViewDistanceScaleSecondaryScale(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::RestoreViewDistanceScaleApplySecondaryScale(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::RestoreTonemapperVariables(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::RestoreOcclusionSlop(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::RestoreFoliageLODDistanceScale(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::RestoreExpandAllOcclusionTestedBBoxesAmount(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::RestoreAllowOcclusionQueries(const UObject* WorldContextObject) {
}

bool UKizokSystemFunctionLibrary::ReimportDataTable(UDataTable* DataTable) {
    return false;
}

void UKizokSystemFunctionLibrary::RegisterAchievements(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::RefreshAnimForGT(AKizokFieldNPCCharacter* fieldNpcCharacter) {
}

int32 UKizokSystemFunctionLibrary::PlaySurroundCommonBank(const UObject* WorldContextObject, FName CueName, FVector Position) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::PlayCommonJingle(const UObject* WorldContextObject, FName CueName) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::PlayCommonBank(const UObject* WorldContextObject, FName CueName, bool bAcrossLevel) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::PlayBgm(const UObject* WorldContextObject, FName CueName, float FadeInTime, float FadeOutTime) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::PlayAttachedCommonBank(const UObject* WorldContextObject, FName CueName, USceneComponent* Parent, FName SocketName) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::PlayAreaSound(const UObject* WorldContextObject, FName RoomId, float fade_in_time, float fade_out_time) {
    return 0;
}

void UKizokSystemFunctionLibrary::NotifyLoadUtageSeq(const UObject* WorldContextObject, FName UtageName) {
}

void UKizokSystemFunctionLibrary::NotifyFinishTitleMovie(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::NotifyEndUtageSeq(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::NotifyEndReloadSublevels(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::NotifyEndCamp(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::NotifyBeginReloadSublevels(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::NotifyBeginDebugRoom(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::NotifyBeginCamp(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::NotifyBackToPlayableFromCampSakabaCS(const UObject* WorldContextObject) {
}

ULevelStreamingDynamic* UKizokSystemFunctionLibrary::LoadLevelInstanceDevelopmentOnly(UObject* WorldContextObject, const FString& LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess) {
    return NULL;
}

ULevelStreamingDynamic* UKizokSystemFunctionLibrary::LoadLevelInstanceBySoftObjectPtrDevelopmentOnly(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool& bOutSuccess) {
    return NULL;
}

bool UKizokSystemFunctionLibrary::LoadAutoSaveData(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsShowFirstSettingMenu(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsShowDLCDialog(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsShipping() {
    return false;
}

bool UKizokSystemFunctionLibrary::IsReleasedDLC(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsPurchasedDLC(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsPlayingMainStory(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsPlayingDLC01(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsPlayAreaSound(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsOpenKeyAssignUI(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsOpenFeature(const UObject* WorldContextObject, EKizokOpenFeature InType) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsNextGen() {
    return false;
}

bool UKizokSystemFunctionLibrary::IsMiniMapRotate(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsForceResetNPCPhysics() {
    return false;
}

bool UKizokSystemFunctionLibrary::IsFastTravelFromLoadMenu() {
    return false;
}

bool UKizokSystemFunctionLibrary::IsEnableTimezoneLcokForDebug() {
    return false;
}

bool UKizokSystemFunctionLibrary::IsDemoVersion() {
    return false;
}

bool UKizokSystemFunctionLibrary::IsClearData(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsCharaMoveLRReverse(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsCharaMoveFBReverse(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsCameraUDReverse(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsCameraLRReverse(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsCameraAutoCorrection(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsAutoDash(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsAgreedEULA(const UObject* WorldContextObject) {
    return false;
}

bool UKizokSystemFunctionLibrary::IsAgreedCeBank(const UObject* WorldContextObject) {
    return false;
}

UKizokWidgetCommonParam* UKizokSystemFunctionLibrary::GetWidgetCommonParam(const UObject* WorldContextObject) {
    return NULL;
}

FVector UKizokSystemFunctionLibrary::GetVectorFlagByFName(const UObject* WorldContextObject, FName Name) {
    return FVector{};
}

UKizokTravelManager* UKizokSystemFunctionLibrary::GetTravelManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FText> UKizokSystemFunctionLibrary::GetTitleMenu(const UObject* WorldContextObject) {
    return TArray<FText>();
}

FString UKizokSystemFunctionLibrary::GetStringFlagByFName(const UObject* WorldContextObject, FName Name) {
    return TEXT("");
}

float UKizokSystemFunctionLibrary::GetSoundVolume(const UObject* WorldContextObject, int32 Handle) {
    return 0.0f;
}

float UKizokSystemFunctionLibrary::GetSoundPlayLength(int32 Handle) {
    return 0.0f;
}

float UKizokSystemFunctionLibrary::GetSoundMasterVoiceVolume(const UObject* WorldContextObject) {
    return 0.0f;
}

float UKizokSystemFunctionLibrary::GetSoundMasterSeVolume(const UObject* WorldContextObject) {
    return 0.0f;
}

float UKizokSystemFunctionLibrary::GetSoundMasterBgmVolume(const UObject* WorldContextObject) {
    return 0.0f;
}

UKizokShopStockManager* UKizokSystemFunctionLibrary::GetShopStockManager(const UObject* WorldContextObject) {
    return NULL;
}

UKizokSaveData* UKizokSystemFunctionLibrary::GetSaveData(const UObject* WorldContextObject) {
    return NULL;
}

FRotator UKizokSystemFunctionLibrary::GetRotatorFlagByFName(const UObject* WorldContextObject, FName Name) {
    return FRotator{};
}

UKizokRevivalTimerCollector* UKizokSystemFunctionLibrary::GetRevivalTimerCollector(const UObject* WorldContextObject) {
    return NULL;
}

void UKizokSystemFunctionLibrary::GetQuestMapSymbols(TArray<FName>& mapSymbols, FName QuestId) {
}

int32 UKizokSystemFunctionLibrary::GetPPVersion(const UObject* WorldContextObject) {
    return 0;
}

FTimespan UKizokSystemFunctionLibrary::GetPlayTime(const UObject* WorldContextObject) {
    return FTimespan{};
}

FName UKizokSystemFunctionLibrary::GetPlayingDLCId(const UObject* WorldContextObject) {
    return NAME_None;
}

UKizokMessageBattleTable* UKizokSystemFunctionLibrary::GetMessageBattleTable(const UObject* WorldContextObject) {
    return NULL;
}

UKizokMapManager* UKizokSystemFunctionLibrary::GetMapManager(const UObject* WorldContextObject) {
    return NULL;
}

FName UKizokSystemFunctionLibrary::GetMainStoryRowName(const UObject* WorldContextObject, int32 InEpisodeFlag) {
    return NAME_None;
}

int32 UKizokSystemFunctionLibrary::GetMainStoryGuideIndex(const UObject* WorldContextObject) {
    return 0;
}

void UKizokSystemFunctionLibrary::GetMainIconMapSymbols(TArray<FName>& outMapSymbols, int32 Seq) {
}

UKizokLvsManager* UKizokSystemFunctionLibrary::GetLvsManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 UKizokSystemFunctionLibrary::GetLogSaveDataValue(const UObject* WorldContextObject, const FName Key) {
    return 0;
}

UKizokLocalizationDataTableManager* UKizokSystemFunctionLibrary::GetLocalizationDataTableManager(const UObject* WorldContextObject) {
    return NULL;
}

UKizokLoadingWidget* UKizokSystemFunctionLibrary::GetLoadingWidget(const UObject* WorldContextObject) {
    return NULL;
}

UKPIManager* UKizokSystemFunctionLibrary::GetKPIManager(const UObject* WorldContextObject) {
    return NULL;
}

UKizokKeyMappingManager* UKizokSystemFunctionLibrary::GetKeyMappingManager(const UObject* WorldContextObject) {
    return NULL;
}

UKizokItemManager* UKizokSystemFunctionLibrary::GetItemManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UKizokSystemFunctionLibrary::GetIsPlayedActivity(const UObject* WorldContextObject) {
    return false;
}

int32 UKizokSystemFunctionLibrary::GetInt32FlagByFName(const UObject* WorldContextObject, FName Name) {
    return 0;
}

FVector UKizokSystemFunctionLibrary::GetGlobalVector(const UObject* WorldContextObject, const FName Key) {
    return FVector{};
}

UKizokGlobalValue* UKizokSystemFunctionLibrary::GetGlobalValue(const UObject* WorldContextObject) {
    return NULL;
}

FString UKizokSystemFunctionLibrary::GetGlobalString(const UObject* WorldContextObject, const FName Key) {
    return TEXT("");
}

FRotator UKizokSystemFunctionLibrary::GetGlobalRotator(const UObject* WorldContextObject, const FName Key) {
    return FRotator{};
}

UKizokGlobalResources* UKizokSystemFunctionLibrary::GetGlobalResources(const UObject* WorldContextObject) {
    return NULL;
}

int32 UKizokSystemFunctionLibrary::GetGlobalInteger(const UObject* WorldContextObject, const FName Key) {
    return 0;
}

float UKizokSystemFunctionLibrary::GetGlobalFloat(const UObject* WorldContextObject, const FName Key) {
    return 0.0f;
}

UKizokGlobalDataTable* UKizokSystemFunctionLibrary::GetGlobalDataTable(const UObject* WorldContextObject) {
    return NULL;
}

int32 UKizokSystemFunctionLibrary::GetGammaValueNoMax(const UObject* WorldContextObject) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::GetGammaValueNo(const UObject* WorldContextObject) {
    return 0;
}

float UKizokSystemFunctionLibrary::GetGammaValue() {
    return 0.0f;
}

float UKizokSystemFunctionLibrary::GetFloatFlagByFName(const UObject* WorldContextObject, FName Name) {
    return 0.0f;
}

FTimespan UKizokSystemFunctionLibrary::GetFieldPlayTime(const UObject* WorldContextObject) {
    return FTimespan{};
}

UKizokFieldManager* UKizokSystemFunctionLibrary::GetFieldManager(const UObject* WorldContextObject) {
    return NULL;
}

UKizokFieldEnemyManager* UKizokSystemFunctionLibrary::GetFieldEnemyManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 UKizokSystemFunctionLibrary::GetEpisodeSeq(const UObject* WorldContextObject) {
    return 0;
}

void UKizokSystemFunctionLibrary::GetEpisodeIdBySeq(FName& outEpisodeId, bool& bIsValid, int32 Seq) {
}

int32 UKizokSystemFunctionLibrary::GetEpisodeFlagConditionDLC(const UObject* WorldContextObject) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::GetEpisodeFlag(const UObject* WorldContextObject) {
    return 0;
}

UKizokEntryLoader* UKizokSystemFunctionLibrary::GetEntryLoader(const UObject* WorldContextObject) {
    return NULL;
}

UKizokEachRegionWarpSound* UKizokSystemFunctionLibrary::GetEachRegionWarpSound(const UObject* WorldContextObject) {
    return NULL;
}

UKizokEachRegionSoundControl* UKizokSystemFunctionLibrary::GetEachRegionSoundControl(const UObject* WorldContextObject) {
    return NULL;
}

UKizokEachRegionMessageTable* UKizokSystemFunctionLibrary::GetEachRegionMessageTable(const UObject* WorldContextObject) {
    return NULL;
}

UKizokDLCManager* UKizokSystemFunctionLibrary::GetDLCManager(const UObject* WorldContextObject) {
    return NULL;
}

FName UKizokSystemFunctionLibrary::GetCurrentBGMName(const UObject* WorldContextObject) {
    return NAME_None;
}

int32 UKizokSystemFunctionLibrary::GetCeBankVersion(const UObject* WorldContextObject) {
    return 0;
}

UKizokCeBankPlayTime* UKizokSystemFunctionLibrary::GetCeBankPlayTime(const UObject* WorldContextObject) {
    return NULL;
}

bool UKizokSystemFunctionLibrary::GetBoolFlagByFName(const UObject* WorldContextObject, FName Name) {
    return false;
}

UKizokBonusManager* UKizokSystemFunctionLibrary::GetBonusManager(const UObject* WorldContextObject) {
    return NULL;
}

FText UKizokSystemFunctionLibrary::GetApplicationVersionText() {
    return FText::GetEmpty();
}

TArray<FName> UKizokSystemFunctionLibrary::GetAllTravelMapSymbols() {
    return TArray<FName>();
}

TArray<FName> UKizokSystemFunctionLibrary::GetAllMainIconMapSymbols() {
    return TArray<FName>();
}

int32 UKizokSystemFunctionLibrary::GetAgreedPPVersion(const UObject* WorldContextObject) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::GetAgreedCeBankVersion(const UObject* WorldContextObject) {
    return 0;
}

int32 UKizokSystemFunctionLibrary::GetAchievementSaveDataValue(const UObject* WorldContextObject, const FName Key) {
    return 0;
}

UKizokAchievementManager* UKizokSystemFunctionLibrary::GetAchievementManager(const UObject* WorldContextObject) {
    return NULL;
}

UKizokAccessoryManager* UKizokSystemFunctionLibrary::GetAccessoryManager(const UObject* WorldContextObject) {
    return NULL;
}

void UKizokSystemFunctionLibrary::FinishedSequencer(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::FinishCSGTDebugPlay(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::FadeOutCurrentBGM(const UObject* WorldContextObject, float Time) {
}

void UKizokSystemFunctionLibrary::FadeOutBGM(const UObject* WorldContextObject, int32 Handle, float Time) {
}

void UKizokSystemFunctionLibrary::EndMeasurePlayTime(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::DisableTonemapperVariables(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::DestroyLetterBox() {
}

void UKizokSystemFunctionLibrary::CreateLetterBox(const UObject* WorldContextObject, EKizokWidgetPriority InPriority) {
}

bool UKizokSystemFunctionLibrary::ClearDataExists(const UObject* WorldContextObject) {
    return false;
}

void UKizokSystemFunctionLibrary::AreaSoundStart(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::AreaSoundPause(const UObject* WorldContextObject) {
}

void UKizokSystemFunctionLibrary::ApplyOptimizationForCrowdAnim(USkeletalMeshComponent* Mesh) {
}

UKizokSystemFunctionLibrary::UKizokSystemFunctionLibrary() {
}

