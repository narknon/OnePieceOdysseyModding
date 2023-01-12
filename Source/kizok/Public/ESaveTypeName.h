#pragma once
#include "CoreMinimal.h"
#include "ESaveTypeName.generated.h"

UENUM(BlueprintType)
enum class ESaveTypeName : uint8 {
    UNKNOWN,
    SAVE_INFO_DATA,
    SAVE_CHECKSUM_DATA,
    SAVE_MAIN_DATA,
    SAVE_THUMBNAIL_DATA,
};

