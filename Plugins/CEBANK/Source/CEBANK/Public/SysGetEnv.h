#pragma once
#include "CoreMinimal.h"
#include "ResponseHeader.h"
#include "SysGetEnvResponseParam.h"
#include "AProtocolMessage.h"
#include "SysGetEnv.generated.h"

class UObject;

UCLASS(Blueprintable)
class USysGetEnv : public UAProtocolMessage {
    GENERATED_BODY()
public:
    USysGetEnv();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void RequestParamFromJson(UObject* WorldContextObject, const FString& Json, int32& issureId, FString& Token);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FSysGetEnvResponseParam& Param);
    
};

