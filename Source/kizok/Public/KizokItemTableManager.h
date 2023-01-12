#pragma once
#include "CoreMinimal.h"
#include "KizokTableDestItem.h"
#include "KizokTableKiraKiraItem2nd.h"
#include "KizokTableTreasItem.h"
#include "UObject/Object.h"
#include "KizokItemTableManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokItemTableManager : public UObject {
    GENERATED_BODY()
public:
    UKizokItemTableManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossessTreasRecord(FName recordName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossessKiraKiraRecord(FName recordName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossessDestRecord(FName recordName) const;
    
    UFUNCTION(BlueprintCallable)
    FKizokTableTreasItem GetPossessTreasRecord(FName recordName);
    
    UFUNCTION(BlueprintCallable)
    FKizokTableKiraKiraItem2nd GetPossessKiraKiraRecord(FName recordName);
    
    UFUNCTION(BlueprintCallable)
    FKizokTableDestItem GetPossessDestRecord(FName recordName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetKiraKiraItemID(FName recordName) const;
    
};

