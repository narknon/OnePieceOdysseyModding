#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableExpCalcAngleBase.h"
#include "UObject/NoExportTypes.h"
#include "KizokTableExpRotCancel.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableExpRotCancel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokTableExpCalcAngleBase BaseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CancelRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SyncCancelTargets;
    
    KIZOK_API FKizokTableExpRotCancel();
};

