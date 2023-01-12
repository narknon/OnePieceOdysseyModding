#pragma once
#include "CoreMinimal.h"
#include "KizokSubQuestPosterData.h"
#include "KizokSubQuestStartResultMenuData.generated.h"

USTRUCT(BlueprintType)
struct FKizokSubQuestStartResultMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSubQuestPosterData PosterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionName;
    
    KIZOK_API FKizokSubQuestStartResultMenuData();
};

