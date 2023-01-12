#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokKizunaQuestListStringTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokKizunaQuestListStringTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestClient;
    
    KIZOK_API FKizokKizunaQuestListStringTableRow();
};

