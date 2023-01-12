#pragma once
#include "CoreMinimal.h"
#include "BtlMenuStatus.h"
#include "BtlMenuStatusBase.h"
#include "BtlPlayerDispStatus.generated.h"

class UKizokBattleStatusButton;

USTRUCT(BlueprintType)
struct FBtlPlayerDispStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuStatusBase Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleStatusButton* PreStatusWBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleStatusButton* CurStatusWBP;
    
    KIZOK_API FBtlPlayerDispStatus();
};

