#pragma once
#include "CoreMinimal.h"
#include "EAtomLoopSettingID.h"
#include "UObject/Object.h"
#include "SoundAtomCue.generated.h"

class USoundAtomCueSheet;
class USoundAttenuation;

UCLASS(Blueprintable, EditInlineNew)
class CRIWARERUNTIME_API USoundAtomCue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyAtomParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtomLoopSettingID LoopSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* DefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEconomicTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEconomicTickSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EconomicTickMarginDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EconomicTickFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullingSoundPlayingProcessByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyCullingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxProcessDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCullingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullingMarginDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstWaveLengthSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopSettingByAtomCraft;
    
    USoundAtomCue();
    UFUNCTION(BlueprintCallable)
    bool IsParameterPalletAssigned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoop() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetUserData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAttenuationDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickMarginDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickFrequencyToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickBoundaryDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCullingMarginDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCullingBoundaryDistanceToUse() const;
    
};

