#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "KizokMovieSceneWeaponVisibleTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWeaponVisibleTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel WeaponVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponName;
    
    KIZOK_API FKizokMovieSceneWeaponVisibleTemplateData();
};

