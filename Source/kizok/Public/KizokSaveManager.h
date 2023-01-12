#pragma once
#include "CoreMinimal.h"
#include "OnLoaded_BPDelegate.h"
#include "OnSaved_BPDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "KizokSaveManager.generated.h"

class UKizokFlagDataCommon;
class UKizokNamedFlagData;
class UKizokSaveGame;
class UKizokSaveThumbnailData;
class UKizokSaveInfoData;

UCLASS(Blueprintable)
class KIZOK_API UKizokSaveManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSaved, UKizokSaveGame*, SaveGame, UKizokNamedFlagData*, namedFlagData, UKizokFlagDataCommon*, flagData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPreSave, UKizokSaveGame*, SaveGame, UKizokNamedFlagData*, namedFlagData, UKizokFlagDataCommon*, flagData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPreLoad, UKizokSaveGame*, SaveGame, UKizokNamedFlagData*, namedFlagData, UKizokFlagDataCommon*, flagData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadedPreCall);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadedAfterCall);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLoaded, UKizokSaveGame*, SaveGame, UKizokNamedFlagData*, namedFlagData, UKizokFlagDataCommon*, flagData);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSaveGame* m_saveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreLoad m_preLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoaded m_loaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreSave m_preSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaved m_saved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadedPreCall m_loadedPreCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadedAfterCall m_loadedAfterCall;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaved_BP OnSaved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoaded_BP OnLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSaveInfoData* m_saveInfoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSaveThumbnailData* m_saveThumbnailData;
    
public:
    UKizokSaveManager();
    UFUNCTION(BlueprintCallable)
    static void SetVectorFlagByFName(FName Name, FVector Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorFlag(const FString& Name, FVector Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringFlagByFName(FName Name, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringFlag(const FString& Name, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorFlagByFName(FName Name, FRotator Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorFlag(const FString& Name, FRotator Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt32FlagByFName(FName Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt32Flag(const FString& Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatFlagByFName(FName Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatFlag(const FString& Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolFlagByFName(FName Name, bool Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolFlag(const FString& Name, bool Data);
    
    UFUNCTION(BlueprintCallable)
    bool SavePlayGame(const FString& Filename, bool infoFlag, bool thumbnailFlag);
    
    UFUNCTION(BlueprintCallable)
    bool SaveGame(int32 slot);
    
    UFUNCTION(BlueprintCallable)
    bool LoadPlayGameInfo(const FString& Filename, bool infoFlag, bool thumbnailFlag);
    
    UFUNCTION(BlueprintCallable)
    bool LoadPlayGame(const FString& Filename, bool infoFlag, bool thumbnailFlag);
    
    UFUNCTION(BlueprintCallable)
    bool LoadGame(int32 slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorFlag(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringFlag(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    UKizokSaveThumbnailData* GetSaveThumbnailData();
    
    UFUNCTION(BlueprintCallable)
    UKizokSaveInfoData* GetSaveInfoData();
    
    UFUNCTION(BlueprintCallable)
    UKizokSaveGame* GetSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRotatorFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRotatorFlag(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInt32FlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInt32Flag(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatFlag(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBoolFlagByFName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBoolFlag(const FString& Name);
    
};

