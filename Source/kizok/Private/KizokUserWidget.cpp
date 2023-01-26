#include "KizokUserWidget.h"
#include "KizokSEComponent.h"


void UKizokUserWidget::StopSound(int32 Handle) {
}

void UKizokUserWidget::StartWidgetOperate() {
}

void UKizokUserWidget::SetInputEnable(bool bInEnable) {
}

void UKizokUserWidget::SetDisableFieldRender(bool bInDisable) {
}

void UKizokUserWidget::ResumeSound(int32 Handle) {
}

void UKizokUserWidget::RemoveAsyncLoadInfoTarget(UImage* InImage) {
}

int32 UKizokUserWidget::RegisterScrollBoxForScrollOnly(UScrollBox* InScrollBox, float InScrollLength, bool bInRightStick) {
    return 0;
}

int32 UKizokUserWidget::RegisterNoButtonScrollBoxForScrollOnly(UScrollBox* InScrollBox, float InScrollInsideSize, float InScrollLength) {
    return 0;
}

int32 UKizokUserWidget::RegisterButtonFromVerticalBox(const UVerticalBox* InVerticalBox, UKizokUserWidget* InCursorWidget, int32 InFocusIndex, EKizokWidgetInput InWidgetInput) {
    return 0;
}

int32 UKizokUserWidget::RegisterButtonFromScrollBoxAndUniqueButton(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, UKizokButtonWidget* InUniqueButtonWidget, int32 InFocusIndex, bool IsAddUniqueButtonFirst) {
    return 0;
}

int32 UKizokUserWidget::RegisterButtonFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, int32 InFocusIndex) {
    return 0;
}

int32 UKizokUserWidget::RegisterButtonFromPanelWidget(UPanelWidget* InPanelWidget, int32 InNum, UKizokUserWidget* InCursorWidget, int32 InFocusIndex, EKizokWidgetInput InWidgetInput) {
    return 0;
}

int32 UKizokUserWidget::RegisterButtonFromHorizontalBox(const UHorizontalBox* InHorizontalBox, UKizokUserWidget* InCursorWidget, int32 InFocusIndex, EKizokWidgetInput InWidgetInput) {
    return 0;
}

int32 UKizokUserWidget::PlayVoice(FName CueName) {
    return 0;
}

int32 UKizokUserWidget::PlaySE(FName CueName) {
    return 0;
}

int32 UKizokUserWidget::PlayJingle(FName CueName) {
    return 0;
}

int32 UKizokUserWidget::PlayCommonSE(EKizokWidgetCommonSE InWidgetCommonSE) {
    return 0;
}

void UKizokUserWidget::PauseSound(int32 Handle) {
}

void UKizokUserWidget::OpenWidgetParts() {
}

void UKizokUserWidget::OpenWidget(EKizokWidgetPriority InPriority, bool bInPaused) {
}




void UKizokUserWidget::OnInputMouseLeave(UKizokButtonWidget* InButtonWidget) {
}

void UKizokUserWidget::OnInputMouseEnter(UKizokButtonWidget* InButtonWidget) {
}






bool UKizokUserWidget::IsInputEnable() {
    return false;
}

UKizokSEComponent* UKizokUserWidget::GetSoundComponent() {
    return NULL;
}

void UKizokUserWidget::EndWidgetOperate() {
}

void UKizokUserWidget::DestroyWidget() {
}

bool UKizokUserWidget::ContainsAnimation(UUserWidget* Widget, UWidgetAnimation* Animation) {
    return false;
}

void UKizokUserWidget::CloseWidget() {
}

void UKizokUserWidget::ClearAsyncLoadInfoList() {
}

int32 UKizokUserWidget::AsyncLoadTextureToMaterial(const FSoftObjectPath& InObjectPath, UMaterialInstanceDynamic* InMaterial, FName InParameterName, UImage* InImage, ESlateVisibility InVisibleType) {
    return 0;
}

int32 UKizokUserWidget::AsyncLoadTextureToImage(const FSoftObjectPath& InObjectPath, UImage* InImage, bool bInMatchSize, bool bInVisibleLoaded, ESlateVisibility InVisibleType) {
    return 0;
}

void UKizokUserWidget::AddWidgetToScrollBox(int32 Index, UKizokButtonWidget* InWidget) {
}

UKizokUserWidget::UKizokUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetManager = NULL;
    this->SoundComponent = CreateDefaultSubobject<UKizokSEComponent>(TEXT("Sound Component"));
}

