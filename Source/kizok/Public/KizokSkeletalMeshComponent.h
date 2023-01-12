#pragma once
#include "CoreMinimal.h"
#include "OnDitherFadeChangedDelegate.h"
#include "KizokSkeletalMeshCompFadeHideDelegate.h"
#include "KizokSkeletalMeshCompFadeVisibleDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "KizokSkeletalMeshComponent.generated.h"

class USkeletalMesh;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> MontageMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds LODBounds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSkeletalMeshCompFadeVisible FadeVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSkeletalMeshCompFadeHide FadeHide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDitherFadeChanged DitherFadeDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
public:
    UKizokSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    void ReInitializeAnimation();
    
};

