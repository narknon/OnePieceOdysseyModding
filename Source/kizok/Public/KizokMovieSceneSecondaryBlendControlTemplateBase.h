#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "EKizokSecondaryType.h"
#include "KizokMovieSceneSecondaryBlendControlTemplateBase.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneSecondaryBlendControlTemplateBase : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Coordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokSecondaryType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ApplyFlags;
    
    KIZOK_API FKizokMovieSceneSecondaryBlendControlTemplateBase();
};

