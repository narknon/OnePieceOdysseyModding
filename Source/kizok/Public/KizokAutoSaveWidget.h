#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokAutoSaveWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAutoSaveWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDisplayTime;
    
public:
    UKizokAutoSaveWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteAutoSave();
    
private:
    UFUNCTION(BlueprintCallable)
    void CompleteAutoSave();
    
};

