#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FieldPersistentAssetManager.generated.h"

UCLASS(Blueprintable)
class UFieldPersistentAssetManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UFieldPersistentAssetManager();
};

