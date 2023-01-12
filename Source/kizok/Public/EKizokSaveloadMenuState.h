#pragma once
#include "CoreMinimal.h"
#include "EKizokSaveloadMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokSaveloadMenuState : uint8 {
    Menu,
    ActiveDialog,
};

