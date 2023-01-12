#include "KizokDebuggerSpinSet.h"

class UKizokDebuggerDataSet;
class UKizokSubMenuWidget;

int32 UKizokDebuggerSpinSet::GetTextIntData() {
    return 0;
}

float UKizokDebuggerSpinSet::GetTextFloatData() {
    return 0.0f;
}

void UKizokDebuggerSpinSet::CreateAll(const FString& Name, UKizokSubMenuWidget* parentWidget, UKizokDebuggerDataSet* parentSet, int32 spinNumber, EWidgetDebugSpinDataType spinDataType, FVector2D Offset) {
}

void UKizokDebuggerSpinSet::CallbackSpinButton(int32 Param) {
}

void UKizokDebuggerSpinSet::CallbackCommittedText(int32 N, const FText& changedtext, TEnumAsByte<ETextCommit::Type> Method) {
}

void UKizokDebuggerSpinSet::CallbackChangedText(int32 N, const FText& changedtext) {
}

UKizokDebuggerSpinSet::UKizokDebuggerSpinSet() {
    this->m_resource = NULL;
    this->m_parentWidget = NULL;
    this->m_parentDataSet = NULL;
    this->m_spinDataType = EWidgetDebugSpinDataType::SPINDATA_FLOAT;
    this->m_textInput = NULL;
    this->m_textBlock = NULL;
    this->m_bLimitFlag = false;
    this->m_min = 0.00f;
    this->m_max = 0.00f;
    this->m_minInt = 0;
    this->m_maxInt = 0;
    this->m_delta = 0.00f;
    this->m_deltaInt = 0;
    this->m_dataType = 0;
    this->m_spinNumber = 0;
    this->m_subMenuPlace = 0;
}

