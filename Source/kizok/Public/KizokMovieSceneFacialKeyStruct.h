#pragma once
#include "CoreMinimal.h"
#include "EFacialMode.h"
#include "EFacialId.h"
#include "MovieSceneKeyStruct.h"
#include "KizokMovieSceneFacialKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneFacialKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacialMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacialId FacialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    KIZOK_API FKizokMovieSceneFacialKeyStruct();
};

