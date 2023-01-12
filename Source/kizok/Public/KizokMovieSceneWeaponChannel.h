#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "KizokMovieSceneWeaponValue.h"
#include "KizokMovieSceneWeaponChannel.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokMovieSceneWeaponChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneWeaponValue> KeyValues;
    
public:
    FKizokMovieSceneWeaponChannel();
};

