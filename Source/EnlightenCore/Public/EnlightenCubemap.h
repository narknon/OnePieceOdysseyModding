#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ReflectionCaptureComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EnlightenCubemapBase -FallbackName=EnlightenCubemapBase
#include "EnlightenCubemap.generated.h"



UCLASS(Blueprintable, MinimalAPI)
class UEnlightenCubemapBase : public UObject
{
    GENERATED_BODY()
};

UCLASS(Blueprintable, MinimalAPI)
class UEnlightenCubemap : public UEnlightenCubemapBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> RadiosityDependencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ReflectionCaptureId;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<UReflectionCaptureComponent> Component;
    
public:
    UEnlightenCubemap();
};

