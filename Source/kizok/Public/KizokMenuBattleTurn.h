#pragma once
#include "CoreMinimal.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleTurn.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleTurn : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* IconListCanvasPanel;
    
public:
    UKizokMenuBattleTurn();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeaderTextFromTextID(FName text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeaderText(FName Text);
    
};

