#pragma once
#include "CoreMinimal.h"
#include "EKizokPictureBookState.generated.h"

UENUM(BlueprintType)
enum class EKizokPictureBookState : uint8 {
    SelectBook,
    SelectItem,
    ViewChara,
    ViewEnemy,
};

