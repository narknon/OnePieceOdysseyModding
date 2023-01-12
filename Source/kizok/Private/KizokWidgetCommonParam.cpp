#include "KizokWidgetCommonParam.h"

class UObject;

void UKizokWidgetCommonParam::ExecEndGroundLogEvent(const UObject* WorldContextObject) {
}

void UKizokWidgetCommonParam::ClearPreGroundLogEvent(const UObject* WorldContextObject) {
}

void UKizokWidgetCommonParam::ClearBeginGroundLogEvent(const UObject* WorldContextObject) {
}

void UKizokWidgetCommonParam::AddPreGroundLogEvent(const UObject* WorldContextObject, FKizokGroundLogDelegate InEvent) {
}

void UKizokWidgetCommonParam::AddBeginGroundLogEvent(const UObject* WorldContextObject, FKizokBeginGroundLogDelegate InEvent) {
}

UKizokWidgetCommonParam::UKizokWidgetCommonParam() {
    this->ItemPossessMax = 0;
    this->DialogMinGuaranteeTime = 0.00f;
    this->ScrollWidgetNum = 0;
    this->TalkWindowWaitTime = 0.00f;
}

