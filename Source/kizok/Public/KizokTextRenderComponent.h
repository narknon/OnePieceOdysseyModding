#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "KizokTextRenderComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokTextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsBillBoard: 1;
    
    UKizokTextRenderComponent();
};

