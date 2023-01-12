#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FieldAsyncTask.h"
#include "FieldSystemTaskWaitTextureStreaming.generated.h"

UCLASS(Blueprintable)
class UFieldSystemTaskWaitTextureStreaming : public UObject, public IFieldAsyncTask {
    GENERATED_BODY()
public:
    UFieldSystemTaskWaitTextureStreaming();
    
    // Fix for true pure virtual functions not being implemented
};

