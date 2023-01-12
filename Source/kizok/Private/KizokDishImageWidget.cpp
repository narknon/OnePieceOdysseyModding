#include "KizokDishImageWidget.h"

bool UKizokDishImageWidget::IsVisibleDishEffect(FName InItemId) const {
    return false;
}

FSoftObjectPath UKizokDishImageWidget::GetDishImage(FName InItemId) const {
    return FSoftObjectPath{};
}

bool UKizokDishImageWidget::ExistDish(FName InItemId) const {
    return false;
}

UKizokDishImageWidget::UKizokDishImageWidget() {
}

