#include "KizokWidgetDebuggerSpinButton.h"

void UKizokWidgetDebuggerSpinButton::OnSpinButtonClicked() {
}

void UKizokWidgetDebuggerSpinButton::MyOnHovered() {
}

UKizokWidgetDebuggerSpinButton::UKizokWidgetDebuggerSpinButton() {
    this->m_parentSet = NULL;
    this->m_execType = EWidgetDebugExecType::CHANGEMENU;
    this->m_param = 0;
}

