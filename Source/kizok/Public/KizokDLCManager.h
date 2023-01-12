#pragma once
#include "CoreMinimal.h"
#include "DLCBridgeSaveParameter.h"
#include "KizokMainStoryTableRow.h"
#include "UObject/Object.h"
#include "KizokDLCManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UKizokDLCManager : public UObject {
    GENERATED_BODY()
public:
    UKizokDLCManager();
    UFUNCTION(BlueprintCallable)
    void SetDLCCurrentRoomId(FName InRoomId);
    
    UFUNCTION(BlueprintCallable)
    void SetDLC01SavePoint(const FName& savePoint);
    
    UFUNCTION(BlueprintCallable)
    UClass* ReplacementClass(const TSoftClassPtr<UObject> InClass);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadDLCSaveParam(const FDLCBridgeSaveParameter& Parameter, int32 slotNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UDataTable* GetLVSNpcEnemyCtrlTable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UDataTable* GetLVSEventCtrlTable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    FName GetDLCCurrentRoomId();
    
    UFUNCTION(BlueprintCallable)
    FName GetDLC01SavePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDLC01EpisodeOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDLC01EpisodeFlagName() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    int32 GetDLC01EpisodeFlag(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FKizokMainStoryTableRow FindMainStoryTable(UObject* WorldContextObject, const FName& RowName);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, bool> FindDLCStoryData(const FName& episodeId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ExecDLCInitialize(UObject* WorldContextObject);
    
};

