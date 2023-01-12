#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokChapterTitleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokChapterTitleWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelopTime;
    
public:
    UKizokChapterTitleWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceTerminate();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetChapterTitleIndex() const;
    
};

