#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DLCGlobalDataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UDLCGlobalDataTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapSymbolTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FastTravelTable;
    
public:
    UDLCGlobalDataTable();
};

