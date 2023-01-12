#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneLipSyncControllTemplateData.h"
#include "KizokMovieSceneLipSyncControllTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLipSyncControllTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneLipSyncControllTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneLipSyncControllTemplate();
};

