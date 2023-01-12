#include "KizokRegionTelopWidget.h"

class UTexture2D;


UTexture2D* UKizokRegionTelopWidget::GetTexture(EKizokRegionTelopTextureType InTextureType) const {
    return NULL;
}

FText UKizokRegionTelopWidget::GetRegionName() const {
    return FText::GetEmpty();
}

UKizokRegionTelopWidget::UKizokRegionTelopWidget() {
    this->TelopTime = 0.00f;
    this->TextureList[0] = NULL;
    this->TextureList[1] = NULL;
}

