#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneWeaponValue.h"
#include "KizokMovieSceneWeaponTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWeaponTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneWeaponValue> EventValues;
    
public:
    KIZOK_API FKizokMovieSceneWeaponTemplate();
};

