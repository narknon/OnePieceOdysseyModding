#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableCharacterWindRate.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FKizokTableCharacterWindRate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseWindRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveWindRate;
    
    KIZOK_API FKizokTableCharacterWindRate();
};

