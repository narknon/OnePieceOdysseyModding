#pragma once
#include "CoreMinimal.h"
#include "KizokStoryListMenuData.generated.h"

USTRUCT(BlueprintType)
struct FKizokStoryListMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StoryGuideId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StoryInfoIdList;
    
    KIZOK_API FKizokStoryListMenuData();
};

