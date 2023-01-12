#include "KizokCharacterSelectButtonWidget.h"


FSoftObjectPath UKizokCharacterSelectButtonWidget::GetAttributeIconPath(ASP_ATTRIBUTE Attribute) const {
    return FSoftObjectPath{};
}

UKizokCharacterSelectButtonWidget::UKizokCharacterSelectButtonWidget() {
    this->bFocus = false;
}

