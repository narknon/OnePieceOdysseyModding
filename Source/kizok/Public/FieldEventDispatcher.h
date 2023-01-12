#pragma once
#include "CoreMinimal.h"
#include "FieldSystemEventDelegate.h"
#include "UObject/Object.h"
#include "FieldEventDispatcher.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UFieldEventDispatcher : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldSystemEvent OnFieldPlayerInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldSystemEvent OnFieldSystemInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldSystemEvent OnStartWaitLevelStreamingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldSystemEvent OnEndWaitLevelStreamingEvent;
    
public:
    UFieldEventDispatcher();
};

