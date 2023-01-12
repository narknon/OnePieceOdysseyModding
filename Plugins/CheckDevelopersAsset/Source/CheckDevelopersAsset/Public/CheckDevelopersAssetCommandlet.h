#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "CheckDevelopersAssetCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class CHECKDEVELOPERSASSET_API UCheckDevelopersAssetCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UCheckDevelopersAssetCommandlet();
};

