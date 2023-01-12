#pragma once
#include "CoreMinimal.h"
#include "BUTTON_GUIDE_TYPE.h"
#include "Components/Image.h"
#include "KizokButtonGuide.generated.h"

UCLASS(Blueprintable)
class UKizokButtonGuide : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<BUTTON_GUIDE_TYPE> GuideType;
    
    UKizokButtonGuide();
};

