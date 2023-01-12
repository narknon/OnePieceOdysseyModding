#pragma once
#include "CoreMinimal.h"
#include "AnimNode_CalcAngleBase.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_TransSyncRot.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FAnimNode_TransSyncRot : public FAnimNode_CalcAngleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DisplayNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DisplayParams;
    
    FAnimNode_TransSyncRot();
};

