#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableSoundWeather.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableSoundWeather : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Note;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    KIZOK_API FKizokTableSoundWeather();
};

