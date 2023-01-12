#pragma once
#include "CoreMinimal.h"
#include "KizokSubQuestPosterData.h"
#include "KizokSubQuestListMenuData.generated.h"

USTRUCT(BlueprintType)
struct FKizokSubQuestListMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSubQuestPosterData PosterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestNotice;
    
    KIZOK_API FKizokSubQuestListMenuData();
};

