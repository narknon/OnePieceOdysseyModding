#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneWindCharacterPhysicsAssetRateTemplateData.h"
#include "KizokMovieSceneWindCharacterPhysicsAssetRateTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWindCharacterPhysicsAssetRateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneWindCharacterPhysicsAssetRateTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneWindCharacterPhysicsAssetRateTemplate();
};

