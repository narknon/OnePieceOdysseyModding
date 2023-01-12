#pragma once
#include "CoreMinimal.h"
#include "EKizokClothError.generated.h"

UENUM(BlueprintType)
enum class EKizokClothError : uint8 {
    None,
    NotJoinPatry,
    NowEquip,
};

