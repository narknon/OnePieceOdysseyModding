#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EnlightenEnvironmentComponent.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENLIGHTENCORE_API UEnlightenEnvironmentComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FColor EnvironmentColor;
    
    UEnlightenEnvironmentComponent();
    UFUNCTION(BlueprintCallable)
    void SetColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float NewBrightness);
    
};

