#pragma once
#include "CoreMinimal.h"
#include "EPhysicalComptibility.generated.h"

UENUM(BlueprintType)
enum class EPhysicalComptibility : uint8 {
    None,
    Weak,
    Resist,
};

