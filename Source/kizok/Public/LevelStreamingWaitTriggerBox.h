#pragma once
#include "CoreMinimal.h"
#include "KizokLvsJobResult.h"
#include "Engine/TriggerBox.h"
#include "LevelStreamingWaitTriggerBox.generated.h"

UCLASS(Blueprintable)
class KIZOK_API ALevelStreamingWaitTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GroundLevelSetNames;
    
public:
    ALevelStreamingWaitTriggerBox();
private:
    UFUNCTION(BlueprintCallable)
    void OnEndLvsJob(FKizokLvsJobResult jobResult);
    
};

