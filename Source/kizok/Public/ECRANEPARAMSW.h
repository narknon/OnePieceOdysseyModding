#pragma once
#include "CoreMinimal.h"
#include "ECRANEPARAMSW.generated.h"

UENUM()
enum class ECRANEPARAMSW : int32 {
    INOP = -0x1,
    SAMEGROUP,
    DIFFGROUP,
    MAX,
};

