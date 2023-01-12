#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokIconTableData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokIconTableData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> IconTableList;
    
public:
    UKizokIconTableData();
};

