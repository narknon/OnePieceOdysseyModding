#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleHitMark.generated.h"

class UKizokBattleHitMarkManager;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleHitMark : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleHitMarkManager* HitMarkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FrameSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NumberTextSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NumberTextOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedAdjustPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAnimWaitTime;
    
public:
    UKizokMenuBattleHitMark();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTextNumber(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRecoverySPTextNumber(int32 Base, int32 bonus);
    
    UFUNCTION(BlueprintCallable)
    void UnBindDelegates();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGaugeAnim(float StartPercent, float EndPercent, bool bDamage, bool bHpGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleHitMark(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProtectText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeAnimParam(float StartPercent, float EndPercent, bool bDamage, bool bHpGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageUp(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHitMarkAnimation(bool is_critical, bool is_weak);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitNumberTextSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitFrameSize();
    
public:
    UFUNCTION(BlueprintCallable)
    FVector2D GetNumberTextSize();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetNumberTextOffset();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetFrameSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceDestroyWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecFinishAnimNotify();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> ConvertNumberToDigitArray(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegates();
    
};

