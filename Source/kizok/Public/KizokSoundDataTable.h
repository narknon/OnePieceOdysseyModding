#pragma once
#include "CoreMinimal.h"
#include "KizokSoundDataTable.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct FKizokSoundDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundAtomCueSheet>> SoundTableList;
    
    KIZOK_API FKizokSoundDataTable();
};

