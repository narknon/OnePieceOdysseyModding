#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneWeaponVisibleTemplateData.h"
#include "KizokMovieSceneWeaponVisibleTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWeaponVisibleTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneWeaponVisibleTemplateData TemplateData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    KIZOK_API FKizokMovieSceneWeaponVisibleTemplate();
};

