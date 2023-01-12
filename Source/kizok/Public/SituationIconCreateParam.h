#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SituationIconCreateParam.generated.h"

class UKizokBattleSituationIcon;

USTRUCT(BlueprintType)
struct FSituationIconCreateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokBattleSituationIcon> RefWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Pos;
    
    KIZOK_API FSituationIconCreateParam();
};

