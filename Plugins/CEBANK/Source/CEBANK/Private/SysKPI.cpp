#include "SysKPI.h"

class UObject;

void USysKPI::RequestParamFromJson(UObject* WorldContextObject, const FString& Json, TArray<FKpiNoColumnData>& KpiNoColumnData) {
}

FString USysKPI::DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FCommonResponseParam& Param) {
    return TEXT("");
}

USysKPI::USysKPI() {
}

