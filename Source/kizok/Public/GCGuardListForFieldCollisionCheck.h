#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GCGuardListForFieldCollisionCheck.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UGCGuardListForFieldCollisionCheck : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> GuardObjects;
    
public:
    UGCGuardListForFieldCollisionCheck();
};

