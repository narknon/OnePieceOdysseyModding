#pragma once
#include "CoreMinimal.h"
#include "ESITUATIONRIBBON.h"
#include "BtlMeuFrame.generated.h"

USTRUCT(BlueprintType)
struct FBtlMeuFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESITUATIONRIBBON FramType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SceneText;
    
    KIZOK_API FBtlMeuFrame();
};

