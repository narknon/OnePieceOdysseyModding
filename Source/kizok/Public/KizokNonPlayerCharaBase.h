#pragma once
#include "CoreMinimal.h"
#include "KizokCharaBase.h"
#include "KizokNonPlayerCharaBase.generated.h"

class UPoseableMeshComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokNonPlayerCharaBase : public AKizokCharaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* WearMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* HeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* BeardMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* AccessaryMesh;
    
    AKizokNonPlayerCharaBase();
};

