#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokCheatStatus.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokCheatStatus : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> mainStoryRowNames;
    
public:
    UKizokCheatStatus();
    UFUNCTION(BlueprintCallable)
    bool RequestCheatStatus();
    
};

