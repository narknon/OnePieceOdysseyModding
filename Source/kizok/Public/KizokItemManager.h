#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokItemManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokItemManager : public UObject {
    GENERATED_BODY()
public:
    UKizokItemManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemPossessNum(const FName& InItemId) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, int32> GetFluctuationItems();
    
    UFUNCTION(BlueprintCallable)
    void ClearFluctuationItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BC_GetItemNum(FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    void AddFirstPossessItem();
    
};

