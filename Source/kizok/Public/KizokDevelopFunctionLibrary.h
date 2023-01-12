#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KizokDevelopFunctionLibrary.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable)
class KIZOK_API UKizokDevelopFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKizokDevelopFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void VisibleAllSubLevels(bool InVisible);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnsetParallelNotationCulture(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleSubLevel(FName subLevelName, bool visible);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetParallelNotationCulture(const UObject* WorldContextObject, const FString& InCulture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMemoryCheckEnable(const UObject* WorldContextObject, bool InEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCulture(const UObject* WorldContextObject, const FString& InCulture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAccessoryRelease(const UObject* WorldContextObject, PLAYER_ID InPlayerId, uint8 InSettingState);
    
    UFUNCTION(BlueprintCallable)
    static bool OutputStringFile(const FString& InFilename, const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVisibleSubLevel(FName subLevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetTextOfTextIdFromAllTextTable(const UObject* WorldContextObject, const FName& InTextId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetTextOfTextIdAndLanguageFromAllTextTable(const UObject* WorldContextObject, const FName& InTextId, const FString& InLanguage);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetSubLevelNameListInPersistentlevel();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetMoney(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FName GetLevelNameFromActor(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetAllActorsInLevel(FName InLevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static uint8 GetAccessoryRelease(const UObject* WorldContextObject, PLAYER_ID InPlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddMoney(const UObject* WorldContextObject, int32 InAddMoney);
    
};

