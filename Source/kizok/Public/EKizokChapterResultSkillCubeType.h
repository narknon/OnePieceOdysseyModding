#pragma once
#include "CoreMinimal.h"
#include "EKizokChapterResultSkillCubeType.generated.h"

UENUM(BlueprintType)
enum class EKizokChapterResultSkillCubeType : uint8 {
    Set,
    Release,
    NowRelease,
    NotRelease,
};

