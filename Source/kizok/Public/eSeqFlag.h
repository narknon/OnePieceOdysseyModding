#pragma once
#include "CoreMinimal.h"
#include "eSeqFlag.generated.h"

UENUM(BlueprintType)
enum eSeqFlag {
    eSeqFlag_AttackCancel,
    eSeqFlag_MotionCancel,
    eSeqFlag_PreInputTimer,
    eSeqFlag_ComboFlag,
    eSeqFlag_DamageAppearFlag,
    eSeqFlag_DamageMotionReq,
    eSeqFlag_FieldFreeAtk,
    eSeqFlag_TraceTiming,
    eSeqFlag_FadeIn,
    eSeqFlag_FadeOut,
    eSeqFlag_CameraShake,
    eSeqFlag_SkillCheck,
    eSeqFlag_MotionStop,
    eSeqFlag_EffectSlashing,
    eSeqFlag_EffectDust,
    eSeqFlag_WeaponVisible,
    eSeqFlag_StartMove,
    eSeqFlag_StopMove,
    eSeqFlag_ComboHit00,
    eSeqFlag_ComboHit01,
    eSeqFlag_ComboHit02,
    eSeqFlag_Uninterfere,
    eSeqFlag_Interfere,
    eSeqFlag_Obtain,
    eSeqFlag_ResetIK,
};

