#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "KizokSoundAssetDebug.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokSoundAssetDebug : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UKizokSoundAssetDebug();
};

