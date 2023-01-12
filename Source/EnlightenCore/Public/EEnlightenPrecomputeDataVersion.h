#pragma once
#include "CoreMinimal.h"
#include "EEnlightenPrecomputeDataVersion.generated.h"

UENUM()
enum class EEnlightenPrecomputeDataVersion : int32 {
    None,
    IncludeEnvironmentInCubemaps,
    ReorderInstanceIds,
    LatestPlusOne,
    Latest = 0x2,
    EEnlightenPrecomputeDataVersion_MAX = 0x4,
};

