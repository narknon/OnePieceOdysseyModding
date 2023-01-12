#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FieldAsyncTask.h"
#include "FieldSystemTaskWaitLoadingProgressComplete.generated.h"

UCLASS(Blueprintable)
class UFieldSystemTaskWaitLoadingProgressComplete : public UObject, public IFieldAsyncTask {
    GENERATED_BODY()
public:
    UFieldSystemTaskWaitLoadingProgressComplete();
    
    // Fix for true pure virtual functions not being implemented
};

