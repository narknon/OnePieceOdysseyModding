#pragma once
#include "CoreMinimal.h"
#include "EKizokCraftMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokCraftMenuState : uint8 {
    CraftMenu,
    CreateNote_Craft,
    CreateNote_Material,
    MenuNumber,
};

