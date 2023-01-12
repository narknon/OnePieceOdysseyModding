#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneSkillMessageParameters.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct KIZOK_API FKizokMovieSceneSkillMessageParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MessageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncVoiceRange;
    
    FKizokMovieSceneSkillMessageParameters();
};

