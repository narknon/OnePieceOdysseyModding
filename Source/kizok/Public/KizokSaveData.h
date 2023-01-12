#pragma once
#include "CoreMinimal.h"
#include "OnLoadAutoSaveDataFinishedDelegate.h"
#include "OnAutoSaveFinishedDelegate.h"
#include "OnLoadSystemDataFinishedDelegate.h"
#include "OnSaveSystemDataFinishedDelegate.h"
#include "OnLoadGameDataFinishedDelegate.h"
#include "OnSaveGameDataFinishedDelegate.h"
#include "KizokDemoSystemSaveData.h"
#include "KizokGameSaveData.h"
#include "KizokSystemSlotSaveData.h"
#include "KizokSystemSaveData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "KizokSaveData.generated.h"

class UKizokSaveObject;
class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveGameDataFinished OnSaveGameDataFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadGameDataFinished OnLoadGameDataFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveSystemDataFinished OnSaveSystemDataFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadSystemDataFinished OnLoadSystemDataFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAutoSaveFinished OnAutoSaveFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadAutoSaveDataFinished OnLoadAutoSaveDataFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SaveKeyTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AreaTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MapSymbolTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> FastTravelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSaveObject* SaveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSystemSaveData SystemSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokGameSaveData GameSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokGameSaveData AutoSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSystemSlotSaveData SystemSlotSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokDemoSystemSaveData DemoSystemSaveData;
    
    UKizokSaveData();
    UFUNCTION(BlueprintCallable)
    void SetVectorFlagByFName(FName Name, FVector Data);
    
    UFUNCTION(BlueprintCallable)
    void SetRotatorFlagByFName(FName Name, FRotator Data);
    
    UFUNCTION(BlueprintCallable)
    void SetInt32FlagByFName(FName Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatFlagByFName(FName Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolFlagByFName(FName Name, bool Data);
    
    UFUNCTION(BlueprintCallable)
    bool SelectGameData(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    bool SaveSystemDataASync();
    
    UFUNCTION(BlueprintCallable)
    bool SaveSystemData();
    
    UFUNCTION(BlueprintCallable)
    bool SaveGameDataASync(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    bool SaveGameData(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    bool LoadGameDataASync(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    bool LoadGameData();
    
    UFUNCTION(BlueprintCallable)
    bool LoadAutoSaveDataASync();
    
    UFUNCTION(BlueprintCallable)
    bool LoadAutoSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidData(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetSystemDataName();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetRotatorFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetLvdString(int32 slot, int32 no);
    
    UFUNCTION(BlueprintCallable)
    FString GetLvdData(int32 Type, int32 no);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInt32FlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetGameDataName();
    
    UFUNCTION(BlueprintCallable)
    float GetFloatFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetErrorString();
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoSaveDataName();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool AutoSaveDataASync();
    
};

