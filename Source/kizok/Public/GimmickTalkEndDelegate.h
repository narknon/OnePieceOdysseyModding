#pragma once
#include "CoreMinimal.h"
#include "GimmickTalkEndDelegate.generated.h"

class AKizokNpcBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGimmickTalkEnd, const AKizokNpcBase*, npc);

