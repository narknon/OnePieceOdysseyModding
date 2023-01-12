#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "KizokDebugData.generated.h"

class UKizokDebugDataTable;
class UKizokDebugTextWidget;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebugData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebugTextWidget> DebugWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebugDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokDebugDataTable> DataTableClass;
    
public:
    UKizokDebugData();
};

