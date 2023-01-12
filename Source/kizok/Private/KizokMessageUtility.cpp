#include "KizokMessageUtility.h"

class UObject;
class UImage;
class UKizokTextBlock;

EKizokMessageCharaDisplayState UKizokMessageUtility::SetLabelAndFaceIconWhenLabelID(const UObject* WorldContextObject, const FName& InLabelId, UKizokTextBlock* InLabelTextBlock, const FName& InFaceId, UImage* InFaceImage) {
    return EKizokMessageCharaDisplayState::Hidden;
}

EKizokMessageCharaDisplayState UKizokMessageUtility::SetLabelAndFaceIcon(const UObject* WorldContextObject, const FText& InLabel, UKizokTextBlock* InLabelTextBlock, const FName& InFaceId, UImage* InFaceImage) {
    return EKizokMessageCharaDisplayState::Hidden;
}

UKizokMessageUtility::UKizokMessageUtility() {
}

