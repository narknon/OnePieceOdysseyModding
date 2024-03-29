#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.generated.h"

UENUM(BlueprintType)
enum class PLAYER_ID : uint8 {
    PLAYER_ID_LUF,
    PLAYER_ID_ZOR,
    PLAYER_ID_NAM,
    PLAYER_ID_USO,
    PLAYER_ID_SAN,
    PLAYER_ID_CHO,
    PLAYER_ID_ROB,
    PLAYER_ID_FRA,
    PLAYER_ID_BRO,
    PLAYER_ID_JIN,
    PLAYER_ID_CRO,
    PLAYER_ID_ACE,
    PLAYER_ID_SAB,
    PLAYER_ID_CAV,
    PLAYER_ID_LAW,
    PLAYER_ID_COR,
    PLAYER_ID_ADI,
    PLAYER_ID_YFR,
    PLAYER_ID_DLCGUEST01,
    PLAYER_ID_DLCGUEST02,
    PLAYER_ID_DLCGUEST03,
    PLAYER_ID_DLCGUEST04,
    PLAYER_ID_DLCGUEST05,
    PLAYER_ID_DLCGUEST06,
    PLAYER_ID_DLCGUEST07,
    PLAYER_ID_DLCGUEST08,
    PLAYER_ID_DLCGUEST09,
    PLAYER_ID_DLCGUEST10,
    PLAYER_ID_DLCGUEST11,
    PLAYER_ID_DLCGUEST12,
    PLAYER_ID_DLCGUEST13,
    PLAYER_ID_DLCGUEST14,
    PLAYER_ID_DLCGUEST15,
    PLAYER_ID_DLCGUEST16,
    PLAYER_ID_DLCGUEST17,
    PLAYER_ID_DLCGUEST18,
    PLAYER_ID_DLCGUEST19,
    PLAYER_ID_DLCGUEST20,
    PLAYER_ID_CHO_MP,
    PLAYER_ID_GUEST_HEAD = 0x9,
    PLAYER_ID_SAVED_NUM = 0x12,
    PLAYER_ID_NUM = 0x26,
    PLAYER_ID_STAT_NUM = 0x26,
    PLAYER_ID_NUM_MANAGE = 0x9,
    PLAYER_ID_NONE = 0xFF,
};

