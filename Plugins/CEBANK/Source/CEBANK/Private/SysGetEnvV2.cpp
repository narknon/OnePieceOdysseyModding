#include "SysGetEnvV2.h"

class UObject;

void USysGetEnvV2::RequestParamFromJson(UObject* WorldContextObject, const FString& Json, int32& issureId, FString& Token, int32& region) {
}

FString USysGetEnvV2::DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FSysGetEnvV2ResponseParam& Param) {
    return TEXT("");
}

USysGetEnvV2::USysGetEnvV2() {
}

