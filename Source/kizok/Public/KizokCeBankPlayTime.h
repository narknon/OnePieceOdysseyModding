#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokCeBankPlayTime.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokCeBankPlayTime : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChapterEpilogue;
    
public:
    UKizokCeBankPlayTime();
    UFUNCTION(BlueprintCallable)
    void StartMeasurePlay();
    
    UFUNCTION(BlueprintCallable)
    void EndMeasurePlay();
    
};

