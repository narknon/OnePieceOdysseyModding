#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageTableType.h"
#include "KizokMessageDataTable.h"
#include "UObject/Object.h"
#include "KizokEachRegionMessageTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokEachRegionMessageTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokMessageDataTable> EachRegionTableMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableList[8];
    
public:
    UKizokEachRegionMessageTable();
    UFUNCTION(BlueprintCallable)
    void UnloadMessageTable();
    
    UFUNCTION(BlueprintCallable)
    void LoadMessageTable(FName InRegionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTable(EKizokMessageTableType InTableType) const;
    
};

