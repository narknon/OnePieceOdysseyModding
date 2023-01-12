#pragma once
#include "CoreMinimal.h"
#include "EBattleMenuSeq.generated.h"

UENUM(BlueprintType)
enum class EBattleMenuSeq : uint8 {
    BMS_Situation,
    BMS_TutorialTitle,
    BMS_MainCmd,
    BMS_LinkArts_Select,
    BMS_Skill_ListSelect,
    BMS_Skill_TargetSelect,
    BMS_Attck_TargetSelect,
    BMS_Item_ListSelect,
    BMS_Item_TargetSelect,
    BMS_MainCmdActon,
    BMS_PlayerAutoAction,
    BMS_TacticsCmd,
    BMS_StrategySelect,
    BMS_PartyChange,
    BMS_StatusCheck,
    BMS_Escape,
    BMS_HelpCheck,
    BMS_Result,
    BMS_Hidden,
    BMS_MaxNum,
    BMS_MAX UMETA(Hidden),
};

