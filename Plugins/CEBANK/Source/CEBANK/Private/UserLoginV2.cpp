#include "UserLoginV2.h"

class UObject;

void UUserLoginV2::RequestParamFromJson(UObject* WorldContextObject, const FString& Json, FString& pUserId, FString& Token, int32& skuType) {
}

FString UUserLoginV2::DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FUserLoginV2ResponseParam& Param) {
    return TEXT("");
}

UUserLoginV2::UUserLoginV2() {
}

