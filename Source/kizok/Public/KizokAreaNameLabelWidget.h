#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokAreaNameLabelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAreaNameLabelWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AreaId;
    
public:
    UKizokAreaNameLabelWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectAreaName(const FText& InAreaName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAreaId() const;
    
};

