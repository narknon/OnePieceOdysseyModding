#pragma once
#include "CoreMinimal.h"
#include "KizokPhysiqueParam.h"
#include "Components/ActorComponent.h"
#include "KizokPhysMtrlBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokPhysMtrlBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokPhysiqueParam PhysiqueParam;
    
    UKizokPhysMtrlBaseComponent();
};

