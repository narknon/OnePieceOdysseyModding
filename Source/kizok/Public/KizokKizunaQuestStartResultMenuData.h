#pragma once
#include "CoreMinimal.h"
#include "KizokKizunaQuestPosterData.h"
#include "KizokKizunaQuestStartResultMenuData.generated.h"

USTRUCT(BlueprintType)
struct FKizokKizunaQuestStartResultMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokKizunaQuestPosterData PosterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionName;
    
    KIZOK_API FKizokKizunaQuestStartResultMenuData();
};

