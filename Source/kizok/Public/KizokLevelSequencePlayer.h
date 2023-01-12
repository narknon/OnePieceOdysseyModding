#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneSequencePlayer.h"
#include "UObject/Object.h"
#include "KizokLevelSequencePlayer.generated.h"

class ULevelSequencePlayer;
class ALevelSequenceActor;
class ULevelSequence;

UCLASS(Blueprintable)
class KIZOK_API UKizokLevelSequencePlayer : public UObject {
    GENERATED_BODY()
public:
    UKizokLevelSequencePlayer();
    UFUNCTION(BlueprintCallable)
    static void PlayLevelSequencerAtOrigin(ULevelSequencePlayer* Player, FTransform Origin);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelSequencePlayer* CreateLevelSequencePlayerAndPlay(UObject* WorldContextObject, ULevelSequence* InLevelSequence, FMovieSceneSequencePlaybackSettings Settings, FTransform Origin, ALevelSequenceActor*& OutActor);
    
};

