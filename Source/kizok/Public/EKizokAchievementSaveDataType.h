#pragma once
#include "CoreMinimal.h"
#include "EKizokAchievementSaveDataType.generated.h"

UENUM(BlueprintType)
enum class EKizokAchievementSaveDataType : uint8 {
    STORY,
    VICTORY_BATTLE,
    ESCAPE_BATTLE,
    WANTED_CAUGHT,
    SUB_QUEST_CLEAR,
    KIZUNA_QUEST_CLEAR,
    USE_KARAKURI_BALL,
    KARAKURI_BALL_CREATE_TYPE,
    KARAKURI_BALL_CREATE,
    USE_CUISINE,
    CUISINE_CREATE_TYPE,
    CUISINE_CREATE,
    ACCESSORY_SYNTHESIS,
    FOUR_EFFECT_ACCESSORY_CREATE,
    COSTUME_CHANGE,
    COSTUME_CHANGE_CREW,
    ONCE_ATTACK_DAMAGE,
    CREW_LEVEL,
    LEVEL_OVER_SEVENTY,
    COLLECT_INFORMATION,
    OPEN_TREASURE_BOX,
    CUBE_PIECE_COLLECT,
    DO_PARTY,
    BERRY_ACQUIRE,
    KIZUNA_ARTS_INVOCATION,
    LUFFY_ACTION,
    ZORO_ACTION,
    USOPP_ACTION,
    CHOPPER_ACTION,
    ROBIN_ACTION,
    SANJI_ACTION,
    NAMI_ACTION,
    FLUNKY_ACTION,
    COLLECT_LOG,
    ALL_ACHIEVEMENTS,
    SUB_EVENT,
    STRONG_BOSS,
    ALL_STRONG_BOSS,
    BOSS_BATTLE,
    SKILL_LEARN,
    ACCESSORY_USE,
    ITEM_GET,
    ITEM_USE,
};
