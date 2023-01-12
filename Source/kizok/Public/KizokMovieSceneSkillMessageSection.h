#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneSkillMessageParameters.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneSkillMessageSection.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokMovieSceneSkillMessageSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneSkillMessageParameters Parameters;
    
public:
    UKizokMovieSceneSkillMessageSection();
};

