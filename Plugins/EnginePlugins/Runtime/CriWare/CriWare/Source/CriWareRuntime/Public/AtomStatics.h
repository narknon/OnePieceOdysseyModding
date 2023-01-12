#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtomStatics.generated.h"

class UObject;
class USceneComponent;
class UAtomComponent;
class USoundAtomCue;
class USoundAtomConfig;
class USoundConcurrency;
class USoundAttenuation;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomStatics();
    UFUNCTION(BlueprintCallable)
    static void UpdateDistanceFactorForAllSounds(float ArgDistanceFactor);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllSoundsForKeyFromAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllSounds();
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* SpawnSoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* SpawnSoundAtLocation(const UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* SpawnSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* PlaySoundForAnimNotify(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bFollow);
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* PlaySoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlaySoundAtLocation(UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable)
    static void PauseAudioOutput(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadAtomConfig(USoundAtomConfig* AcfObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* CreateRootedAtomComponent(const UObject* WorldContextObject, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void AddToAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef, int32 AtomComponentID);
    
};

