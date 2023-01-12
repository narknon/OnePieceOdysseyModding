#pragma once
#include "CoreMinimal.h"
#include "EFieldAsyncTaskListType.generated.h"

UENUM(BlueprintType)
enum class EFieldAsyncTaskListType : uint8 {
    Once,
    Continue,
};

