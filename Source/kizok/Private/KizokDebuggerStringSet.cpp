#include "KizokDebuggerStringSet.h"

class UKizokSubMenuWidget;

void UKizokDebuggerStringSet::RequestData() {
}

void UKizokDebuggerStringSet::OnMyTick(float DeltaTime) {
}

void UKizokDebuggerStringSet::CreateAll(const FString& Name, UKizokSubMenuWidget* parentWidget, int32 setNumber, EWidgetDebugDataType DataType, FVector2D Offset) {
}

void UKizokDebuggerStringSet::CallbackCommittedText(int32 N, const FText& changedtext, TEnumAsByte<ETextCommit::Type> Method) {
}

void UKizokDebuggerStringSet::CallbackChangedText(int32 N, const FText& changedtext) {
}

void UKizokDebuggerStringSet::CallbackChangedString(int32 N, const FString& mes) {
}

UKizokDebuggerStringSet::UKizokDebuggerStringSet() {
    this->m_dataType = EWidgetDebugDataType::DEBUG_DATATYPE_UNKNOWN;
    this->m_setNumber = 0;
    this->m_numberOfDataBlock = 0;
    this->m_parentWidget = NULL;
    this->m_realTimeUpdate = 0.00f;
    this->m_timePast = 0.00f;
    this->m_resource = NULL;
    this->m_textInput = NULL;
    this->m_textBlock = NULL;
    this->m_subMenuPlace = 0;
}

