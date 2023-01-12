#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FieldAsyncTask.generated.h"

UINTERFACE(Blueprintable)
class KIZOK_API UFieldAsyncTask : public UInterface {
    GENERATED_BODY()
};

class KIZOK_API IFieldAsyncTask : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckComplete();
    
};

