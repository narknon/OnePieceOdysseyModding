#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokSequencerNameTableRow.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKizokSequencerNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequencer;
    
    KIZOK_API FKizokSequencerNameTableRow();
};

