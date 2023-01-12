#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/Object.h"
#include "KizokRevivalTimerCollector.generated.h"

UCLASS(Blueprintable)
class UKizokRevivalTimerCollector : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTimerHandle> m_Info;
    
public:
    UKizokRevivalTimerCollector();
    UFUNCTION(BlueprintCallable)
    void ResetTimerHandle();
    
};

