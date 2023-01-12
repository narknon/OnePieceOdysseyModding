#pragma once
#include "CoreMinimal.h"
#include "BaseSofdec2Source.h"
#include "StreamSofdec2Source.generated.h"

UCLASS(Blueprintable)
class SOFDEC2_API UStreamSofdec2Source : public UBaseSofdec2Source {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamUrl;
    
    UStreamSofdec2Source();
};

