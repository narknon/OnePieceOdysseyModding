#pragma once
#include "CoreMinimal.h"
#include "CloaseFastTravelLoadingUIWithWaitCompleteDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CloseFastTravelLoadingUIWithWait.generated.h"

class UObject;
class UCloseFastTravelLoadingUIWithWait;

UCLASS(Blueprintable)
class KIZOK_API UCloseFastTravelLoadingUIWithWait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloaseFastTravelLoadingUIWithWaitComplete Completed;
    
public:
    UCloseFastTravelLoadingUIWithWait();
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCloseFastTravelLoadingUIWithWait* CloseFastTravelLoadingUIWithWait(UObject* WorldContextObject);
    
};

