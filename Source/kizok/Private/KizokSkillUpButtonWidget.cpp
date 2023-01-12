#include "KizokSkillUpButtonWidget.h"

class UUserWidget;

void UKizokSkillUpButtonWidget::ResetCubeIcon(int32 forceCubeIndex, bool forceActive) {
}

void UKizokSkillUpButtonWidget::RegisterAnimationWidget(UUserWidget* Widget, int32 Index) {
}



uint8 UKizokSkillUpButtonWidget::GetSelfIndex() const {
    return 0;
}

uint8 UKizokSkillUpButtonWidget::GetCharaIndex() const {
    return 0;
}

uint8 UKizokSkillUpButtonWidget::GetButtonGroupIndex() const {
    return 0;
}

UKizokSkillUpButtonWidget::UKizokSkillUpButtonWidget() {
    this->SelfIndex = 0;
    this->CharaIndex = 0;
    this->AnimationWidgets[0] = NULL;
    this->AnimationWidgets[1] = NULL;
    this->AnimationWidgets[2] = NULL;
    this->AnimationWidgets[3] = NULL;
    this->AnimationWidgets[4] = NULL;
    this->AnimationWidgets[5] = NULL;
    this->AnimationWidgets[6] = NULL;
    this->AnimationWidgets[7] = NULL;
}

