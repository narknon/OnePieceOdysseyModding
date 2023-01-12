#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerClass.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FPlayerClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> m_Class;
    
    KIZOK_API FPlayerClass();
};

