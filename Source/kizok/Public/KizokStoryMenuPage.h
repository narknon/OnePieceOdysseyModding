#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokStoryMenuPage.generated.h"

class UKizokStoryMenuFrame;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokStoryMenuPage : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UKizokStoryMenuPage();
    UFUNCTION(BlueprintCallable)
    void SetStoryMenuFrame(UKizokStoryMenuFrame* InStoryMenuFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokStoryMenuFrame* GetStoryMenuFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSortStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoticeDeletePossible() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearFocusInfoAndSortStep();
    
    UFUNCTION(BlueprintCallable)
    void ChangeScrollBoxInfo(float InScrollInsideSize);
    
};

