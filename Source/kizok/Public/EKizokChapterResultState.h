#pragma once
#include "CoreMinimal.h"
#include "EKizokChapterResultState.generated.h"

UENUM(BlueprintType)
enum class EKizokChapterResultState : uint8 {
    ReleaseSkill,
    ReleaseSkillOpen,
    FixAcceFrame,
    FixAcceFrameOpen,
    MenuNumber,
};

