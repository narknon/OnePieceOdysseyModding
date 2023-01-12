#pragma once
#include "CoreMinimal.h"
#include "EKizokCharacterSelectMemberType.generated.h"

UENUM(BlueprintType)
enum class EKizokCharacterSelectMemberType : uint8 {
    BattleMember,
    SubMember,
    GuestMember,
};

