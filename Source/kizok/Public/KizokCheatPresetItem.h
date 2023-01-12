#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokCheatPresetItem.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokCheatPresetItem : public UObject {
    GENERATED_BODY()
public:
    UKizokCheatPresetItem();
    UFUNCTION(BlueprintCallable)
    void SetPresetItem(const FName& ItemSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRowNames() const;
    
};

