#include "KizokMotionViewer.h"

bool UKizokMotionViewer::OnRequestDebugData(FWidgetDebugCommonDataSet& dataset) {
    return false;
}

void UKizokMotionViewer::OnClickDebugButton(EWidgetDebugExecType execType, int32 Param) {
}

void UKizokMotionViewer::OnChangeDebugData(FWidgetDebugCommonDataSet& dataset) {
}

UKizokMotionViewer::UKizokMotionViewer() {
    this->NowChara = NULL;
    this->InGameChara = NULL;
    this->m_debuggerWidget = NULL;
}

