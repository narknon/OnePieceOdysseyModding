#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AutomationUtilTaskSystem.generated.h"

UCLASS(Blueprintable)
class AUTOMATIONUTIL_API UAutomationUtilTaskSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAutomationUtilTaskSystem();
};

