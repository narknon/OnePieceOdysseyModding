#include "KizokSubMenuWidget.h"

void UKizokSubMenuWidget::TESTTEST(int32 Param) {
}

void UKizokSubMenuWidget::OnMyTick(float DeltaTime) {
}

UKizokSubMenuWidget::UKizokSubMenuWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_resource = NULL;
    this->m_parentWidget = NULL;
    this->m_playerController = NULL;
    this->m_image = NULL;
    this->m_subTitle = NULL;
    this->m_canvasPanel = NULL;
    this->m_scrollBox = NULL;
    this->ButtonNextY = 0.00f;
    this->m_wrap = NULL;
    this->m_subMenuNumber = 0;
    this->m_parentSubMenuNumber = 0;
}

