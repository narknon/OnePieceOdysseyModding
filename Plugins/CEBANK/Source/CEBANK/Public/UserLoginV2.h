#pragma once
#include "CoreMinimal.h"
#include "ResponseHeader.h"
#include "UserLoginV2ResponseParam.h"
#include "AProtocolMessage.h"
#include "UserLoginV2.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUserLoginV2 : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UUserLoginV2();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void RequestParamFromJson(UObject* WorldContextObject, const FString& Json, FString& pUserId, FString& Token, int32& skuType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FUserLoginV2ResponseParam& Param);
    
};

