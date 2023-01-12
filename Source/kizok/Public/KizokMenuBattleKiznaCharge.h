#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuDirectAnim.h"
#include "KiznaChargeAnimParm.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleKiznaCharge.generated.h"

class UKizokMenuBattleMain;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleKiznaCharge : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGaugeBarPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxKiznaChargeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxKiznaLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeBarUpdateTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* KiznaGaugeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuDirectAnim CurDierctAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstGaugeUp;
    
public:
    UKizokMenuBattleKiznaCharge();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAllAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKiznaGaugeBar(int32 kiznaChargeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKiznaChargeText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectNextKiznaLevel(int32 curLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectKiznaGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectCurKiznaLevel(int32 curLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMessageAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayKiznaChargeAnim(const FKiznaChargeAnimParm& Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayChargeAnimation(bool bLvUp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWindow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFinishedChargeAnim();
    
    UFUNCTION(BlueprintCallable)
    float GetKiznaGaugeCurveValue(float kiznaGaugeRate);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurKiznaChargeValue();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurKiznaChargeLevel();
    
    UFUNCTION(BlueprintCallable)
    void FinishedDirectAnim();
    
    UFUNCTION(BlueprintCallable)
    void DirectionAnimEndNotify();
    
};

