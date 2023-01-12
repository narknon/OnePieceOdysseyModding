#pragma once
#include "CoreMinimal.h"
#include "ActorWithTag.generated.h"

USTRUCT(BlueprintType)
struct FActorWithTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Tags;
    
    KIZOK_API FActorWithTag();
};

