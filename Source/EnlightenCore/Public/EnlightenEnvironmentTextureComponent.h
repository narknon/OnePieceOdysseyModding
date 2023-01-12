#pragma once
#include "CoreMinimal.h"
#include "EnlightenEnvironmentComponent.h"
#include "EnlightenEnvironmentTextureComponent.generated.h"

class UTextureCube;

UCLASS(Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENLIGHTENCORE_API UEnlightenEnvironmentTextureComponent : public UEnlightenEnvironmentComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* CubemapTexture;
    
    UEnlightenEnvironmentTextureComponent();
    UFUNCTION(BlueprintCallable)
    void SetCubemapTexture(UTextureCube* NewCubemap);
    
};

