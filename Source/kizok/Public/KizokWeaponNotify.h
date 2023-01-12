#pragma once
#include "CoreMinimal.h"
#include "NOTIFY_TYPE.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokWeaponNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokWeaponNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<NOTIFY_TYPE> NotifyType;
    
    UKizokWeaponNotify();
};

