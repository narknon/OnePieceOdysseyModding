#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokAreaTelopWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAreaTelopWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelopTime;
    
public:
    UKizokAreaTelopWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceTerminate();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAreaName() const;
    
};

