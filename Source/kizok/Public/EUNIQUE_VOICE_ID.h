#pragma once
#include "CoreMinimal.h"
#include "EUNIQUE_VOICE_ID.generated.h"

UENUM(BlueprintType)
enum class EUNIQUE_VOICE_ID : uint8 {
    EVI_UNDEFINED,
    EVI_NORMAL_O_NAMI,
    EVI_NORMAL_S_NAMI,
    EVI_NORMAL_S_ROBIN,
    EVI_SIT_BOSS_S_ZORO,
    EVI_SIT_BOSS_NorROnF,
    EVI_LLOW_NorROnF,
    EVI_SLEPT_NorROnF,
    EVI_STUN_NorROnF,
    EVI_CONF_NorROnF,
    EVI_SORR_ME_S_NorR,
    EVI_SORR_ME_S_Uand_O_N,
    EVI_SORR_ME_S_ZORO,
    EVI_SORR_IN_NorR,
    EVI_DAZZ_NorROnF,
    EVI_MAX UMETA(Hidden),
};

