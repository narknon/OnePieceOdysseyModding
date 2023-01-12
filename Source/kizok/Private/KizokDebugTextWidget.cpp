#include "KizokDebugTextWidget.h"

UKizokDebugTextWidget::UKizokDebugTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_LeftScroll = NULL;
    this->m_RightScroll = NULL;
    this->m_FreeTextCanvasPanel = NULL;
    this->m_RightCanvasPanel = NULL;
}

