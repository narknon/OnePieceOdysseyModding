#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBtlMenuDirectAnim.h"
#include "BtlCharaIcon.h"
#include "UObject/NoExportTypes.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleCharaIcon.generated.h"

class UWidgetAnimation;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleCharaIcon : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> BaseTexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> FaceMaterialPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PlayerFlagTexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlayerFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidScaleChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidActedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActedCharaDeadAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlCharaIcon IconParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveAnimLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitTimeLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAnimationFinishedWaitTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoveAnimCurve;
    
public:
    UKizokMenuBattleCharaIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTreasureIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScale();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPreAttackRingLampAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnim(UWidgetAnimation* WidgetAnim);
    
public:
    UFUNCTION(BlueprintCallable)
    void SituationIconOff();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleStatusText(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetValidScale(bool bValid);
    
    UFUNCTION(BlueprintCallable)
    void SetValidActedAnim(bool bValid);
    
    UFUNCTION(BlueprintCallable)
    void SetUsePlayerFlagImage(bool bUseFlag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSituationStatusText(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOffsetPos(FVector2D OffsetPos);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconParam(const FBtlCharaIcon& Param);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconAngle(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectTurnOrder(int32 TurnOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectIcon(const FBtlCharaIcon& Param);
    
    UFUNCTION(BlueprintCallable)
    void PlaySituationIcon(TArray<FText> TextList, bool bPlayerBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPreAttackRingLampAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPackQueueAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayMoveAnim(UCurveFloat* Curve, FVector2D EndPos, EBtlMenuDirectAnim AnimType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenmberInAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenberOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayKickOutAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGroupMoveAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFallOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDeadAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedMoveToTopIconAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedMoveToTopIconAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedFocusAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedDeadAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedBlowJumpAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedBlowFallAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadFrameIconTexture();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayedCharaDeadAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsInitIcon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitSetting();
    
    UFUNCTION(BlueprintCallable)
    void GroupMoveAnimEnd();
    
    UFUNCTION(BlueprintCallable)
    FBtlCharaIcon GetIconParam();
    
    UFUNCTION(BlueprintCallable)
    void DirectionAnimEndNotify(EBtlMenuDirectAnim AnimType);
    
    UFUNCTION(BlueprintCallable)
    void CharaDeadAnimEndNotify();
    
    UFUNCTION(BlueprintCallable)
    void CharaChangeAnimEndNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeIconColor(bool bActed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallDirectAnimEndNotify(EBtlMenuDirectAnim DirectAnimType);
    
};

