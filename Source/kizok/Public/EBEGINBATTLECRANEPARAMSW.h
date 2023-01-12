#pragma once
#include "CoreMinimal.h"
#include "EBEGINBATTLECRANEPARAMSW.generated.h"

UENUM()
enum class EBEGINBATTLECRANEPARAMSW : int32 {
    BBCP_INOP = -0x1,
    BBCP_NORMAL,
    BBCP_LARGE,
    BBCP_MAX UMETA(Hidden),
};

