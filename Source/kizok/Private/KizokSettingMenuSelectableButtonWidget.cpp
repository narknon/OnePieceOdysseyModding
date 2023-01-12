#include "KizokSettingMenuSelectableButtonWidget.h"



bool UKizokSettingMenuSelectableButtonWidget::IsCanSub() const {
    return false;
}

bool UKizokSettingMenuSelectableButtonWidget::IsCanAdd() const {
    return false;
}

uint8 UKizokSettingMenuSelectableButtonWidget::GetSelectableIndex() const {
    return 0;
}

FText UKizokSettingMenuSelectableButtonWidget::GetOptionName() const {
    return FText::GetEmpty();
}

FText UKizokSettingMenuSelectableButtonWidget::GetItemText(uint8 InIndex) const {
    return FText::GetEmpty();
}

UKizokSettingMenuSelectableButtonWidget::UKizokSettingMenuSelectableButtonWidget() {
}

