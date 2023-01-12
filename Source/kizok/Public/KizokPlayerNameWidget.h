#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "KizokUserWidget.h"
#include "KizokPlayerNameWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokPlayerNameWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UKizokPlayerNameWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerName(const FText& InPlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerFlag(UKizokUserWidget* InWidget, const FSoftObjectPath& InFlagTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerColor(PLAYER_ID InPlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInAnimation(bool bInReverse);
    
};

