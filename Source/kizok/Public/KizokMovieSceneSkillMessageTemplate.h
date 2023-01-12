#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneSkillMessageTemplate.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FKizokMovieSceneSkillMessageTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionDataTable;
    
public:
    KIZOK_API FKizokMovieSceneSkillMessageTemplate();
};

