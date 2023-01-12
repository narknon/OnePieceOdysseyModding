#include "KPIManager.h"

class UObject;
class UNetMessage;

void UKPIManager::SendDirect(UObject* WorldContextObject, const FKpiNoColumnData& KpiNoColumnData) {
}

void UKPIManager::Send(UObject* WorldContextObject) {
}

void UKPIManager::OnReceive(UNetMessage* Data) {
}

void UKPIManager::OnError(int32 code, const FString& errmsg) {
}

void UKPIManager::Login(UObject* WorldContextObject) {
}

bool UKPIManager::IsSendEnable() const {
    return false;
}

void UKPIManager::GetEnv(UObject* WorldContextObject) {
}

void UKPIManager::AgreeKPI(UObject* WorldContextObject, bool bAgree) {
}

void UKPIManager::AddKPINoColumnData(const FKpiNoColumnData& KpiNoColumnData) {
}

UKPIManager::UKPIManager() {
    this->WebApiConnect = NULL;
}

