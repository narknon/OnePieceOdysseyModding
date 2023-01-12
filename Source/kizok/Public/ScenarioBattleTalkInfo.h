#pragma once
#include "CoreMinimal.h"
#include "ScenarioBattleTalkInfo.generated.h"

USTRUCT(BlueprintType)
struct FScenarioBattleTalkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyPartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TalkCharacters;
    
    KIZOK_API FScenarioBattleTalkInfo();
};

