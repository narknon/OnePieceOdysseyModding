#pragma once
#include "CoreMinimal.h"
#include "EEnlightenLightmapDisplayQuality.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenProbeSampleMethodSet -FallbackName=EEnlightenProbeSampleMethodSet
#include "Engine/DeveloperSettings.h"
#include "EnlightenSettings.generated.h"

UENUM(BlueprintType)
namespace EEnlightenProbeSampleMethodSet {
    enum Type {
        PerObject,
    };
}

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class ENLIGHTENCORE_API UEnlightenSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CubemapResolution;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenLightmapDisplayQuality::Type> EnlightenLightmapDisplayQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenLightmapDisplayQuality::Type> EnlightenMobileLightmapDisplayQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenProbeSampleMethodSet::Type> AvailableProbeSampleMethods;
    
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ProbeAtlasSize;
    
    UEnlightenSettings();
};

