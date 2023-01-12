#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "KizokSetHairColorComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokSetHairColorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> m_MaterialList;
    
public:
    UKizokSetHairColorComponent();
    UFUNCTION(BlueprintCallable)
    void SetHairColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetAndChangeColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetHairColor();
    
};

