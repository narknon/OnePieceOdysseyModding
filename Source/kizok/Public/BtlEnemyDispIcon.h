#pragma once
#include "CoreMinimal.h"
#include "BtlMenuStatusBase.h"
#include "BtlEnemyDispIcon.generated.h"

class UKizokMenuBattleCharaIcon;

USTRUCT(BlueprintType)
struct FBtlEnemyDispIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuStatusBase Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleCharaIcon* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DispOrderInGroup;
    
    KIZOK_API FBtlEnemyDispIcon();
};

