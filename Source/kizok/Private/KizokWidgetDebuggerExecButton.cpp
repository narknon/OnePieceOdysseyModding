#include "KizokWidgetDebuggerExecButton.h"

void UKizokWidgetDebuggerExecButton::OnExecButtonClicked1() {
}

void UKizokWidgetDebuggerExecButton::MyOnHovered() {
}

UKizokWidgetDebuggerExecButton::UKizokWidgetDebuggerExecButton() {
    this->m_parentWidget = NULL;
    this->m_execType = EWidgetDebugExecType::CHANGEMENU;
    this->m_param = 0;
    this->m_subMenuPlace = 0;
}

