#pragma once
#include "CoreMinimal.h"
#include "FieldNPCWeaponParam.generated.h"

USTRUCT(BlueprintType)
struct FFieldNPCWeaponParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WeaponBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    KIZOK_API FFieldNPCWeaponParam();
};

