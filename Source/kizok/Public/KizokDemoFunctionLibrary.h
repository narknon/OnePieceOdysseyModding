#pragma once
#include "CoreMinimal.h"
#include "EPATH_TYPE_CODITION_DEMO_VERSION.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KizokDemoFunctionLibrary.generated.h"

class UObject;
class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokDemoFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKizokDemoFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UObject* LoadObjectAssetConditionDemoVersion(UObject* WorldContextObject, const TSoftClassPtr<UObject> softClassPtr);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDataTable* LoadDatatableConditionDemoVersion(UObject* WorldContextObject, TEnumAsByte<EPATH_TYPE_CODITION_DEMO_VERSION> pathType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UClass* LoadClassAssetConditionDemoVersion(UObject* WorldContextObject, const TSoftClassPtr<UObject> softClassPtr);
    
};

