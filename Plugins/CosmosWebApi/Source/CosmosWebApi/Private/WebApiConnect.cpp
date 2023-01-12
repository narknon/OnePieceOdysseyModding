#include "WebApiConnect.h"

class UObject;
class UNetMessage;
class UWebApiConnect;

UWebApiConnect* UWebApiConnect::UserLoginV2(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 skuType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::UserLogin(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 skuType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::UserCreate(UObject* WorldContextObject, const FString& pUserId, int32 skuType) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysOfflineKPI(UObject* WorldContextObject, const TArray<FKpiNoColumnData>& KpiNoColumnData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysKPI(UObject* WorldContextObject, const TArray<FKpiNoColumnData>& KpiNoColumnData) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysGetEnvV2(UObject* WorldContextObject, int32 issureId, const FString& Token, int32 region) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysGetEnv(UObject* WorldContextObject, int32 issureId, const FString& Token) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SysAgreeKPI(UObject* WorldContextObject, int32 agreeFlg) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::SetHeader(UObject* WorldContextObject, const FString& titleCd, const FString& userId, const FString& session, int32 Platform) {
    return NULL;
}

UWebApiConnect* UWebApiConnect::Initialize(UObject* WorldContextObject, const FString& baseUrl, float limitsec) {
    return NULL;
}

void UWebApiConnect::GetUserLoginV2Response(UNetMessage* Data, FResponseHeader& respHeader, FUserLoginV2ResponseParam& respParam) {
}

void UWebApiConnect::GetUserLoginResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserLoginResponseParam& respParam) {
}

void UWebApiConnect::GetUserCreateResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserCreateResponseParam& respParam) {
}

void UWebApiConnect::GetSysOfflineKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetSysKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

void UWebApiConnect::GetSysGetEnvV2Response(UNetMessage* Data, FResponseHeader& respHeader, FSysGetEnvV2ResponseParam& respParam) {
}

void UWebApiConnect::GetSysGetEnvResponse(UNetMessage* Data, FResponseHeader& respHeader, FSysGetEnvResponseParam& respParam) {
}

void UWebApiConnect::GetSysAgreeKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam) {
}

UWebApiConnect::UWebApiConnect() {
}

