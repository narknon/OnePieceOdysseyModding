#include "KizokFadeWidget.h"

class UObject;
class UImage;
class UKizokFadeWidget;

void UKizokFadeWidget::UnsetRemoveFade() {
}

void UKizokFadeWidget::SetWhiteFade() {
}

void UKizokFadeWidget::SetPriority(EKizokWidgetPriority InPriority) {
}

void UKizokFadeWidget::SetFadeImage(UImage* InImage) {
}

void UKizokFadeWidget::SetColor(const FLinearColor& InColor) {
}

void UKizokFadeWidget::SetBlackFade() {
}

void UKizokFadeWidget::SequenceStartFadeAtSelectTime(const UObject* WorldContextObject, float InFadeTime) {
}

void UKizokFadeWidget::SequenceStartFade(const UObject* WorldContextObject) {
}

void UKizokFadeWidget::SequenceNewFadeAtColor(const UObject* WorldContextObject, const TArray<FKizokFadeQueue>& InQueueList, EKizokFadeFixedPriority InPriority, const FLinearColor& InColor) {
}

void UKizokFadeWidget::SequenceNewFade(const UObject* WorldContextObject, const TArray<FKizokFadeQueue>& InQueueList, EKizokFadeFixedPriority InPriority, EKizokFadeFixedColor InFixedColor) {
}

void UKizokFadeWidget::SequenceEndFadeAtSelectTimeAndSelectPriority(const UObject* WorldContextObject, EKizokFadeFixedColor InFixedColor, float InFadeTime, EKizokFadeFixedPriority InPriority) {
}

void UKizokFadeWidget::SequenceEndFadeAtSelectTime(const UObject* WorldContextObject, EKizokFadeFixedColor InFixedColor, float InFadeTime) {
}

void UKizokFadeWidget::SequenceEndFadeAtSelectPriority(const UObject* WorldContextObject, EKizokFadeFixedColor InFixedColor, EKizokFadeFixedPriority InFixedPriority) {
}

void UKizokFadeWidget::SequenceEndFade(const UObject* WorldContextObject, EKizokFadeFixedColor InFixedColor) {
}

UKizokFadeWidget* UKizokFadeWidget::SequenceCreateFadeWidgetAtColor(const UObject* WorldContextObject, EKizokFadeFixedPriority InPriority, const FLinearColor& InColor) {
    return NULL;
}

UKizokFadeWidget* UKizokFadeWidget::SequenceCreateFadeWidget(const UObject* WorldContextObject, EKizokFadeFixedPriority InPriority, EKizokFadeFixedColor InFixedColor) {
    return NULL;
}



void UKizokFadeWidget::NotRemoveFade() {
}

bool UKizokFadeWidget::IsPlaying() const {
    return false;
}

void UKizokFadeWidget::IndicateFadeAtSetColor(const FLinearColor& InColor) {
}

float UKizokFadeWidget::GetSystemWaitTime() const {
    return 0.0f;
}

UKizokFadeWidget* UKizokFadeWidget::GetSystemFadeWidget(const UObject* WorldContextObject) {
    return NULL;
}

float UKizokFadeWidget::GetSystemFadeTime() const {
    return 0.0f;
}

float UKizokFadeWidget::GetSequenceFadeTime() const {
    return 0.0f;
}

FLinearColor UKizokFadeWidget::GetColor() const {
    return FLinearColor{};
}

void UKizokFadeWidget::FinishFade() {
}

void UKizokFadeWidget::Enqueue(EKizokFadeType InFadeType, float InFadeTime) {
}

UKizokFadeWidget* UKizokFadeWidget::CreateFadeWidget(const UObject* WorldContextObject) {
    return NULL;
}

UKizokFadeWidget::UKizokFadeWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SystemFadeTime = 0.00f;
    this->SystemWaitTime = 0.00f;
    this->SequenceFadeTime = 0.00f;
}

