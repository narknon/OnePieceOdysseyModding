#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokDataUInt8Array.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokDataUInt8Array : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> uint8Array;
    
    UKizokDataUInt8Array();
};

