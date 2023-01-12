#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokMainMenuPage.generated.h"

class UKizokMainMenuFrame;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMainMenuPage : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UKizokMainMenuPage();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMainMenuFrame* GetMainMenuFrame() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseAnime();
    
};

