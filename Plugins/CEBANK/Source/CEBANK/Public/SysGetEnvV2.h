#pragma once
#include "CoreMinimal.h"
#include "ResponseHeader.h"
#include "SysGetEnvV2ResponseParam.h"
#include "AProtocolMessage.h"
#include "SysGetEnvV2.generated.h"

class UObject;

UCLASS(Blueprintable)
class USysGetEnvV2 : public UAProtocolMessage {
    GENERATED_BODY()
public:
    USysGetEnvV2();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void RequestParamFromJson(UObject* WorldContextObject, const FString& Json, int32& issureId, FString& Token, int32& region);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FSysGetEnvV2ResponseParam& Param);
    
};

