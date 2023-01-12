#pragma once
#include "CoreMinimal.h"
#include "KizokSkillUpMenuSkillWidgetData.generated.h"

class UKizokSkillUpButtonWidget;

USTRUCT(BlueprintType)
struct FKizokSkillUpMenuSkillWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokSkillUpButtonWidget*> WidgetList;
    
    KIZOK_API FKizokSkillUpMenuSkillWidgetData();
};

