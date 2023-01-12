#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokGameConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=KizokGame)
class KIZOK_API UKizokGameConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppVersion;
    
    UKizokGameConfig();
};

