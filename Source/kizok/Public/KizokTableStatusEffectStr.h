#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableStatusEffectStr.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableStatusEffectStr : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InfoLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InfoNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InfoHigh;
    
    KIZOK_API FKizokTableStatusEffectStr();
};

