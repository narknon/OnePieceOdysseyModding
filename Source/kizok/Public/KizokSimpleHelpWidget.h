#pragma once
#include "CoreMinimal.h"
#include "KizokLocalizationTextParam.h"
#include "KizokUserWidget.h"
#include "KizokSimpleHelpWidget.generated.h"

class UKizokRichTextBlock;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSimpleHelpWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpTextTableAsset;
    
public:
    UKizokSimpleHelpWidget();
    UFUNCTION(BlueprintCallable)
    void OpenNextSimpleHelp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBindDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuteDestroyWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void InitTextBlock(UKizokRichTextBlock* InRichTextBlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokLocalizationTextParam GetTextParam() const;
    
};

