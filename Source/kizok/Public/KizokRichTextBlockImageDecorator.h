#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/RichTextBlockDecorator.h"
#include "KizokRichTextBlockImageDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class KIZOK_API UKizokRichTextBlockImageDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> BrushList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
public:
    UKizokRichTextBlockImageDecorator();
    UFUNCTION(BlueprintCallable)
    void ChangeButtonGuide();
    
};

