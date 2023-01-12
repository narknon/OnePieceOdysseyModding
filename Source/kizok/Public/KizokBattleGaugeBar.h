#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokBattleMenuBase.h"
#include "KizokBattleGaugeBar.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBattleGaugeBar : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GaugeAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGaugeAnimLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHpBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartGaugePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndGaugePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAnimTime;
    
public:
    UKizokBattleGaugeBar();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopNormalGauge();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartGaugeAnim(float StartPercent, float EndPercent, bool bDamage, bool bHpGauge);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeParam(float StartPercent, float EndPercent, bool bDamage, bool bHpGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeAnim(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGauge(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectGauge();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNormalGauge();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGaugeAnim();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishedGaugeAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetGaugeSize();
    
};

