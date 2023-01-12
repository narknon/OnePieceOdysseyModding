#pragma once
#include "CoreMinimal.h"
#include "EKizokSaveloadDataType.generated.h"

UENUM(BlueprintType)
enum class EKizokSaveloadDataType : uint8 {
    AutoSave,
    Normal,
    NoData,
    Broken,
    Broken_AutoSave,
};

