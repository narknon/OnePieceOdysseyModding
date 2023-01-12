#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokRoomTelopWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokRoomTelopWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UKizokRoomTelopWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeRoomTelop();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentRoomName() const;
    
};

