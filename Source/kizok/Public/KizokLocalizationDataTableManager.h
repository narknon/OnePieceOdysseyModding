#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokLocalizationDataTableManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokLocalizationDataTableManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> L10NDataTableList;
    
public:
    UKizokLocalizationDataTableManager();
    UFUNCTION(BlueprintCallable)
    void RemoveL10NDataTable(UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    void AddL10NDataTable(UDataTable* InDataTable);
    
};

