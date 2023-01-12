#pragma once
#include "CoreMinimal.h"
#include "EKizokSettingMenuResetButtonMode.generated.h"

UENUM(BlueprintType)
enum class EKizokSettingMenuResetButtonMode : uint8 {
    Reset,
    ReturnTitle,
    EndGame,
};

