#pragma once
#include "CoreMinimal.h"
#include "KizokCeBankSkillLearnedSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokCeBankSkillLearnedSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLearned[64];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[64];
    
    KIZOK_API FKizokCeBankSkillLearnedSaveData();
};

