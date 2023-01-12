#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KizokActionKeyMap.generated.h"

USTRUCT(BlueprintType)
struct FKizokActionKeyMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyString;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bShift;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bCtrl;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bAlt;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bCmd;
    
    KIZOK_API FKizokActionKeyMap();
};

