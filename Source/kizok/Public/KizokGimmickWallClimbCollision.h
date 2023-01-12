#pragma once
#include "CoreMinimal.h"
#include "EWallClimbCollisionType.h"
#include "UObject/NoExportTypes.h"
#include "KizokGimmickInteractBase.h"
#include "KizokGimmickWallClimbCollision.generated.h"

class USplineComponent;
class USphereComponent;
class UBoxComponent;
class UKizokGimmickClimbRailCamera;
class UArrowComponent;

UCLASS(Blueprintable)
class AKizokGimmickWallClimbCollision : public AKizokGimmickInteractBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_pWallCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* GGPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LandingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWallClimbCollisionType m_CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGetOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGGPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokGimmickClimbRailCamera* RailCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* RailCameraSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsScaleRock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SaveScale;
    
public:
    AKizokGimmickWallClimbCollision();
protected:
    UFUNCTION(BlueprintCallable)
    void StartGimmick();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetRegistFPSTargetFlag(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopAccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGGPoint() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InteractPreparation();
    
    UFUNCTION(BlueprintCallable)
    void InteractDisposal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWallClimbCollisionType GetCollisionType() const;
    
};

