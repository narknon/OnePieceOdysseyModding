#include "KizokDebuggerTextInput.h"

void UKizokDebuggerTextInput::OnMyCommittedText(const FText& changedtext, TEnumAsByte<ETextCommit::Type> Method) {
}

void UKizokDebuggerTextInput::OnMyChangedText(const FText& changedtext) {
}

UKizokDebuggerTextInput::UKizokDebuggerTextInput() {
    this->m_parentWidget = NULL;
    this->m_parentSpinSet = NULL;
    this->m_parentStringSet = NULL;
    this->m_bIsParentSpinSet = false;
    this->m_bIsParentStringSet = false;
    this->m_param = 0;
    this->m_bSkipNextChange = false;
    this->m_subMenuPlace = 0;
}

