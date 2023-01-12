#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BtlMenuDebugParams.generated.h"

class UKizokBattleMenuManager;

UCLASS(Blueprintable)
class UBtlMenuDebugParams : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleMenuManager* BtlMenuMgr;
    
public:
    UBtlMenuDebugParams();
};

