#pragma once
#include "CoreMinimal.h"
#include "KizokAttachWeaponParam.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokAttachWeaponParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponScale;
    
    FKizokAttachWeaponParam();
};

