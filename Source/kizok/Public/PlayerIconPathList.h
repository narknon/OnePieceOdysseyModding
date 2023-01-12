#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokCharaIconType.h"
#include "PlayerIconPathList.generated.h"

USTRUCT(BlueprintType)
struct FPlayerIconPathList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKizokCharaIconType, FSoftObjectPath> List;
    
    KIZOK_API FPlayerIconPathList();
};

