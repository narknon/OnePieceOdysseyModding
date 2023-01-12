#pragma once
#include "CoreMinimal.h"
#include "KizokEventCtrl.generated.h"

USTRUCT(BlueprintType)
struct FKizokEventCtrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EpisodeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NightTime;
    
    KIZOK_API FKizokEventCtrl();
};

