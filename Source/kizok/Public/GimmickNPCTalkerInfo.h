#pragma once
#include "CoreMinimal.h"
#include "GimmickNPCTalkerInfo.generated.h"

class AKizokNpcBase;

USTRUCT(BlueprintType)
struct FGimmickNPCTalkerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokNpcBase* npc;
    
    KIZOK_API FGimmickNPCTalkerInfo();
};

