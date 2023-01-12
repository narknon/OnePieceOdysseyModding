#include "SysOfflineKPI.h"

class UObject;

void USysOfflineKPI::RequestParamFromJson(UObject* WorldContextObject, const FString& Json, TArray<FKpiNoColumnData>& KpiNoColumnData) {
}

FString USysOfflineKPI::DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FCommonResponseParam& Param) {
    return TEXT("");
}

USysOfflineKPI::USysOfflineKPI() {
}

