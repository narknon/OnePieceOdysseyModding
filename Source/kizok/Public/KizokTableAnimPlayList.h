#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableAnimPlayList.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FKizokTableAnimPlayList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> PlayAnimation1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> PlayAnimation2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> PlayAnimation3;
    
    KIZOK_API FKizokTableAnimPlayList();
};

