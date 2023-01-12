#pragma once
#include "CoreMinimal.h"
#include "KizokGimmickBase.h"
#include "KizokGimmickGGRocket.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;
class UArrowComponent;

UCLASS(Blueprintable)
class AKizokGimmickGGRocket : public AKizokGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* LandedPoint;
    
    AKizokGimmickGGRocket();
private:
    UFUNCTION(BlueprintCallable)
    void SetRegistFlag(bool flag);
    
};

