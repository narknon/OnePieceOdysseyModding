#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageCharaDisplayState.h"
#include "UObject/Object.h"
#include "KizokMessageUtility.generated.h"

class UImage;
class UKizokTextBlock;

UCLASS(Blueprintable)
class KIZOK_API UKizokMessageUtility : public UObject {
    GENERATED_BODY()
public:
    UKizokMessageUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EKizokMessageCharaDisplayState SetLabelAndFaceIconWhenLabelID(const UObject* WorldContextObject, const FName& InLabelId, UKizokTextBlock* InLabelTextBlock, const FName& InFaceId, UImage* InFaceImage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EKizokMessageCharaDisplayState SetLabelAndFaceIcon(const UObject* WorldContextObject, const FText& InLabel, UKizokTextBlock* InLabelTextBlock, const FName& InFaceId, UImage* InFaceImage);
    
};

