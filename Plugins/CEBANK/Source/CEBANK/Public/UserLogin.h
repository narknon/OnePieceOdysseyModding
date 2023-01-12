#pragma once
#include "CoreMinimal.h"
#include "ResponseHeader.h"
#include "UserLoginResponseParam.h"
#include "AProtocolMessage.h"
#include "UserLogin.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUserLogin : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UUserLogin();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void RequestParamFromJson(UObject* WorldContextObject, const FString& Json, FString& pUserId, FString& Token, int32& skuType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FUserLoginResponseParam& Param);
    
};

