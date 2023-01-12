#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "KizokPostProcessSwitchComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokPostProcessSwitchComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnv_HatchingEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnv_OutlineEnable;
    
public:
    UKizokPostProcessSwitchComponent();
};

