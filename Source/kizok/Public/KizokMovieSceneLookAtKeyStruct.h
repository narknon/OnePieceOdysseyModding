#pragma once
#include "CoreMinimal.h"
#include "ELookAtMode.h"
#include "MovieSceneKeyStruct.h"
#include "UObject/NoExportTypes.h"
#include "KizokMovieSceneLookAtKeyStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FKizokMovieSceneLookAtKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeckOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    KIZOK_API FKizokMovieSceneLookAtKeyStruct();
};

