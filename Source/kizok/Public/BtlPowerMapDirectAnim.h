#pragma once
#include "CoreMinimal.h"
#include "BtlMenuGroupMoveParam.h"
#include "BtlPowerMapDirectAnim.generated.h"

class UKizokMenuBattleCharaIcon;

USTRUCT(BlueprintType)
struct FBtlPowerMapDirectAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleCharaIcon* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuGroupMoveParam GroupMovePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndMoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveViewport;
    
    KIZOK_API FBtlPowerMapDirectAnim();
};

