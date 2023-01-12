#pragma once
#include "CoreMinimal.h"
#include "Sofdec2PlayerTrackOptions.h"
#include "Sofdec2PlayerOptions.generated.h"

USTRUCT(BlueprintType)
struct FSofdec2PlayerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSofdec2PlayerTrackOptions Tracks;
    
    SOFDEC2_API FSofdec2PlayerOptions();
};

