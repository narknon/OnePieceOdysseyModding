#pragma once
#include "CoreMinimal.h"
#include "AtomAisacControlParam.h"
#include "AtomSelectorParam.h"
#include "Sound/SoundAttenuation.h"
#include "EAtomComponentStatus.h"
#include "EAtomLoopSettingID.h"
#include "Components/SceneComponent.h"
#include "AtomComponent.generated.h"

class UAtomComponent;
class UAtomSoundObject;
class USoundAtomCueSheet;
class USoundAtomCue;
class UGameViewportClient;
class UWorld;
class USoundAttenuation;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioFinished);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistAcrossLevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsUISound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMultipleSoundPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* DefaultSoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultBlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomAisacControlParam> DefaultAisacControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomSelectorParam> DefaultSelectorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtomLoopSettingID LoopSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnly2DSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* PlayWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameViewportClient* GameViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAttenuationSettings AttenuationOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* AppliedSoundObject;
    
public:
    UAtomComponent();
    UFUNCTION(BlueprintCallable)
    void StopWithoutReleaseTime();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundObject(UAtomSoundObject* SoundObject);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectorLabel(const FString& Selector, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMultiplier(float NewPitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetNextBlockIndex(int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultAttenuationEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffsetByName(const FString& BusName, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffset(int32 BusId, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelByName(const FString& BusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevel(int32 BusId, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetAsrRackIdArray(TArray<int32> AsrRackIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetAsrRackID(int32 asr_rack_id);
    
    UFUNCTION(BlueprintCallable)
    void SetAisacByName(const FString& ControlName, float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenEconomicTick() const;
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAtomComponentStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSequencePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumQueuedSounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDefaultAttenuationEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMaxAttenuationDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentEconomicTickMarginDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentEconomicTickFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentEconomicTickBoundaryDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCullingMarginDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCullingBoundaryDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCueName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAtomComponentID() const;
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* GetAtomComponentFromID(int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyComponentByID(int32 TargetID);
    
};

