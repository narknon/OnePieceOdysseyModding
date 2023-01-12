#pragma once
#include "CoreMinimal.h"
#include "EKizokLvsJobResultDesc.h"
#include "EKizokLvsJobType.h"
#include "KizokLvsJobResult.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokLvsJobResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokLvsJobType JobType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokLvsJobResultDesc ResultDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuccess;
    
public:
    FKizokLvsJobResult();
};

