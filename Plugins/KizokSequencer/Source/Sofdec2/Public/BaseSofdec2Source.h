#pragma once
#include "CoreMinimal.h"
#include "Sofdec2Source.h"
#include "BaseSofdec2Source.generated.h"

UCLASS(Abstract, Blueprintable)
class SOFDEC2_API UBaseSofdec2Source : public USofdec2Source {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PlayerName;
    
public:
    UBaseSofdec2Source();
};

