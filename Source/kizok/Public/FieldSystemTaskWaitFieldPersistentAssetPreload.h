#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FieldAsyncTask.h"
#include "FieldSystemTaskWaitFieldPersistentAssetPreload.generated.h"

UCLASS(Blueprintable)
class UFieldSystemTaskWaitFieldPersistentAssetPreload : public UObject, public IFieldAsyncTask {
    GENERATED_BODY()
public:
    UFieldSystemTaskWaitFieldPersistentAssetPreload();
    
    // Fix for true pure virtual functions not being implemented
};

