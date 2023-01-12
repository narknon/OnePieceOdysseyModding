#pragma once
#include "CoreMinimal.h"
#include "KizokWindController.h"
#include "KizokWindCSController.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API AKizokWindCSController : public AKizokWindController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedDataTable;
    
public:
    AKizokWindCSController();
};

