#pragma once
#include "CoreMinimal.h"
#include "KizokKizunaQuestPosterData.h"
#include "KizokKizunaQuestListMenuData.generated.h"

USTRUCT(BlueprintType)
struct FKizokKizunaQuestListMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokKizunaQuestPosterData PosterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestNotice;
    
    KIZOK_API FKizokKizunaQuestListMenuData();
};

