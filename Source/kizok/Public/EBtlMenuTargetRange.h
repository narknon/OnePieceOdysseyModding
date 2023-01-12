#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuTargetRange.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuTargetRange : uint8 {
    BMTR_Self,
    BMTR_FriendOneSameGroup,
    BMTR_FriendOneAllGroup,
    BMTR_EnemyOneSameGroup,
    BMTR_EnemyOneAllGroup,
    BMTR_FriendGroupSameGroup,
    BMTR_FriendGroupAllGroup,
    BMTR_EnemiesGroupSameGroup,
    BMTR_EnemiesGroupAllGroup,
    BMTR_FriendInField,
    BMTR_EnemiesInField,
    BMTR_Unknown,
    BMTR_MaxNum,
    BMTR_MAX UMETA(Hidden),
};

