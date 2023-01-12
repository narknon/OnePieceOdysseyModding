#pragma once
#include "CoreMinimal.h"
#include "WarpAfterDelegateDelegate.h"
#include "Engine/TriggerBase.h"
#include "KizokGimmickWarpTriggerBase.generated.h"

class USceneComponent;
class AActor;
class AKizokGimmickWarpTriggerBase;
class UTextRenderComponent;
class UArrowComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokGimmickWarpTriggerBase : public ATriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokGimmickWarpTriggerBase* m_pWarpTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWarpCollisionEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCameraReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* m_pWarpActorTextComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarpAfterDelegate OnWarpBeforeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarpAfterDelegate OnWarpAfterDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* m_pArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveDisplayName;
    
public:
    AKizokGimmickWarpTriggerBase();
    UFUNCTION(BlueprintCallable)
    void WarpPlayer(AActor* pPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetWarpPlayerValid(bool bIsValid);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDisp(bool bIsDisp);
    
    UFUNCTION(BlueprintCallable)
    AKizokGimmickWarpTriggerBase* GetWarpTargetActor();
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugDisp();
    
    UFUNCTION(BlueprintCallable)
    void BeginWarp();
    
};

