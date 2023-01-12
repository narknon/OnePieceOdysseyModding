#pragma once
#include "CoreMinimal.h"
#include "Curves/RealCurve.h"
#include "ELookAtMode.h"
#include "MovieSceneObjectBindingID.h"
#include "UObject/NoExportTypes.h"
#include "KizokMovieSceneLookAtValue.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLookAtValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeckOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID ObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    KIZOK_API FKizokMovieSceneLookAtValue();
};

