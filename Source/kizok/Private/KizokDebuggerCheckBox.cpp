#include "KizokDebuggerCheckBox.h"

void UKizokDebuggerCheckBox::RequestData() {
}

void UKizokDebuggerCheckBox::OnMyTick(float DeltaTime) {
}

void UKizokDebuggerCheckBox::OnCheckButtonClicked(bool B) {
}

UKizokDebuggerCheckBox::UKizokDebuggerCheckBox() {
    this->m_parentWidget = NULL;
    this->m_realTimeUpdate = 0.00f;
    this->m_timePast = 0.00f;
    this->m_bSkipNextChange = false;
    this->m_subMenuPlace = 0;
}

