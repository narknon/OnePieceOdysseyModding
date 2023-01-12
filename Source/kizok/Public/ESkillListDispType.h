#pragma once
#include "CoreMinimal.h"
#include "ESkillListDispType.generated.h"

UENUM(BlueprintType)
enum class ESkillListDispType : uint8 {
    NotRelease,
    Release,
    LearnedAndNotFix,
    NotLearndAndFix,
    LearndAndFix,
    DisableBySituation,
};

