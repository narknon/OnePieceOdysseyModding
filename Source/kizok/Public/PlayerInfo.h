#pragma once
#include "CoreMinimal.h"
#include "PlayerInfo.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* m_pPawn;
    
    KIZOK_API FPlayerInfo();
};

