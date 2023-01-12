#pragma once
#include "CoreMinimal.h"
#include "EKizokEffectWeatherType.h"
#include "Components/SceneComponent.h"
#include "KizokEffectWeatherComponent.generated.h"

class UKizokEffectWeatherObject;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKizokEffectWeatherComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokEffectWeatherObject* Object;
    
public:
    UKizokEffectWeatherComponent();
    UFUNCTION(BlueprintCallable)
    void OnAtSaveKey(USceneComponent* ParentComponent);
    
    UFUNCTION(BlueprintCallable)
    void On(EKizokEffectWeatherType Type, USceneComponent* ParentComponent);
    
    UFUNCTION(BlueprintCallable)
    void OffAll();
    
    UFUNCTION(BlueprintCallable)
    void Off(EKizokEffectWeatherType Type);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllEffect();
    
};

