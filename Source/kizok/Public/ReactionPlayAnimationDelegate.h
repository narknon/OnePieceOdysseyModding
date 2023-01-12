#pragma once
#include "CoreMinimal.h"
#include "ReactionPlayAnimationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReactionPlayAnimation, const FName&, AssetName);

