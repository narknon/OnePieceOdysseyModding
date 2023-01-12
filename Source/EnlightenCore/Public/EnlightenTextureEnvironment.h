#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "EnlightenTextureEnvironment.generated.h"

class UEnlightenEnvironmentTextureComponent;

UCLASS(Blueprintable)
class ENLIGHTENCORE_API AEnlightenTextureEnvironment : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnlightenEnvironmentTextureComponent* Component;
    
    AEnlightenTextureEnvironment();
};

