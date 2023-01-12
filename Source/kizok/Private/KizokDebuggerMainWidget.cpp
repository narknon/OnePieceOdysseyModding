#include "KizokDebuggerMainWidget.h"

void UKizokDebuggerMainWidget::StartCreateWidget() {
}

void UKizokDebuggerMainWidget::OnMymainTick(float DeltaSecond) {
}

void UKizokDebuggerMainWidget::OnButtonClicked() {
}

void UKizokDebuggerMainWidget::EndWidget() {
}

void UKizokDebuggerMainWidget::BeginWidget() {
}

UKizokDebuggerMainWidget::UKizokDebuggerMainWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DebuggerResourceClass = NULL;
    this->m_debuggerResource = NULL;
    this->SubMenuWidgetClass = NULL;
    this->m_playerController = NULL;
    this->ExampleButton = NULL;
    this->m_widgetSwitcher = NULL;
    this->m_sub = NULL;
    this->m_b = NULL;
    this->m_checkBox = NULL;
    this->m_textInput = NULL;
    this->m_panel = NULL;
    this->m_enterCurve = NULL;
    this->m_mainCurve = NULL;
    this->m_exitCurve = NULL;
    this->m_timePast = 0.00f;
    this->m_subMenuNumber = 0;
}

