#pragma once
#include "CoreMinimal.h"
#include "KizokLocalizationTextParam.h"
#include "KizokUserWidget.h"
#include "KizokDestinationWidget.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokDestinationWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MainStoryTargetStringTable;
    
public:
    UKizokDestinationWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseAnime();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokLocalizationTextParam GetDestinationTextParam() const;
    
};

