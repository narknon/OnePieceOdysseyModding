#include "KizokDebuggerDataSet.h"

class UKizokSubMenuWidget;

void UKizokDebuggerDataSet::RequestData() {
}

void UKizokDebuggerDataSet::OnMyTick(float DeltaTime) {
}

void UKizokDebuggerDataSet::CreateAll(const FString& Name, UKizokSubMenuWidget* parentWidget, int32 setNumber, EWidgetDebugDataType DataType, FVector2D Offset, float Delta, float minData, float maxData) {
}

void UKizokDebuggerDataSet::CallbackChangedInt(int32 N, int32 Data) {
}

void UKizokDebuggerDataSet::CallbackChangedFloat(int32 N, float Data, int32 subMenuPlace) {
}

UKizokDebuggerDataSet::UKizokDebuggerDataSet() {
    this->m_dataType = EWidgetDebugDataType::DEBUG_DATATYPE_UNKNOWN;
    this->m_setNumber = 0;
    this->m_numberOfDataBlock = 0;
    this->m_parentWidget = NULL;
    this->m_spinDataType = EWidgetDebugSpinDataType::SPINDATA_FLOAT;
    this->m_realTimeUpdate = 0.00f;
    this->m_timePast = 0.00f;
    this->m_resource = NULL;
    this->m_subMenuPlace = 0;
}

