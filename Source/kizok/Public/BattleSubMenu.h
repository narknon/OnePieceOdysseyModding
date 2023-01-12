#pragma once
#include "CoreMinimal.h"
#include "BattleSubMenu.generated.h"

USTRUCT(BlueprintType)
struct FBattleSubMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassPtr;
    
    KIZOK_API FBattleSubMenu();
};

