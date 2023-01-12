#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ShowVersionConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Debug)
class SHOWVERSION_API UShowVersionConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DllVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageVersion;
    
    UShowVersionConfig();
};

