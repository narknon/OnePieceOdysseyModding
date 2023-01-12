#include "KizokAccessoryImageWidget.h"

FSoftObjectPath UKizokAccessoryImageWidget::GetAccessoryImage(FName InAccessoryId) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokAccessoryImageWidget::GetAccessoryCubeImage(uint8 InShapeId, bool IsNamed) const {
    return FSoftObjectPath{};
}

bool UKizokAccessoryImageWidget::ExistAccessory(FName InAccessoryId) const {
    return false;
}

UKizokAccessoryImageWidget::UKizokAccessoryImageWidget() {
}

