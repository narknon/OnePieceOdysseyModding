#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokDebugDataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebugDataTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CheatStatusTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CheatPresetItemTable;
    
public:
    UKizokDebugDataTable();
};

