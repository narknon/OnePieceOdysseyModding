#pragma once
#include "CoreMinimal.h"
#include "FieldWarpInfo.h"
#include "KizokTravelData.h"
#include "KizokLvsJobResult.h"
#include "UObject/Object.h"
#include "KizokFieldManager.generated.h"

class UFieldDebugAsset;
class UFieldAsyncTask;
class IFieldAsyncTask;
class UFieldWarpSystem;
class UFieldTravelSystem;
class UFieldEventDispatcher;
class UFieldNPCAnimAssetManager;
class UFieldLevelStreamingWaitSequence;
class UDbgFieldEventLogger;
class UKizokHeatmapMiniMapManager;
class UKizokSystemEventListener;

UCLASS(Blueprintable)
class KIZOK_API UKizokFieldManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemEventListener* SystemEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldWarpSystem* WarpSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldTravelSystem* TravelSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldEventDispatcher* SystemEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDbgFieldEventLogger* EventLogger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldDebugAsset* FieldDebugAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokHeatmapMiniMapManager* HeatmapMiniMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldNPCAnimAssetManager* NpcAnimAssetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldLevelStreamingWaitSequence* LevelStreamingWaitSequence;
    
public:
    UKizokFieldManager();
    UFUNCTION(BlueprintCallable)
    void SetEnableNowLoadingSequence(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTriggerEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMiddlePointEnable(bool bIsEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartWarp(FFieldWarpInfo warpInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStartMiddlePoint();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartLvsJob(FKizokLvsJobResult jobResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnFieldInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnEndWarpForRenderer(FFieldWarpInfo warpInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEndWarp(FFieldWarpInfo warpInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTravel(FKizokTravelData travelData);
    
    UFUNCTION(BlueprintCallable)
    void OnEndLvsJob(FKizokLvsJobResult jobResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompleteMiddlePoint();
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteInitializeSubLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitLevelStreaming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableNPCSetAnimMultifame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFieldWarpSystem* GetWarpSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFieldTravelSystem* GetTravelSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFieldEventDispatcher* GetSystemEvent();
    
    UFUNCTION(BlueprintCallable)
    UKizokHeatmapMiniMapManager* GetHeatmapMiniMapManager();
    
    UFUNCTION(BlueprintCallable)
    void CancelFastTravelWithNoEventDispach();
    
    UFUNCTION(BlueprintCallable)
    void AddFieldInitializationTask(TScriptInterface<IFieldAsyncTask> task);
    
};

