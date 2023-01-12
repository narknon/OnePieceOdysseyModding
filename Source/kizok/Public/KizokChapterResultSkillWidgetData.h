#pragma once
#include "CoreMinimal.h"
#include "KizokChapterResultSkillWidgetData.generated.h"

class UKizokUserWidget;

USTRUCT(BlueprintType)
struct FKizokChapterResultSkillWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokUserWidget*> Widgets;
    
    KIZOK_API FKizokChapterResultSkillWidgetData();
};

