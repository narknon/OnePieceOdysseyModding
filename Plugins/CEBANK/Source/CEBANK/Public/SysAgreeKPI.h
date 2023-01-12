#pragma once
#include "CoreMinimal.h"
#include "ResponseHeader.h"
#include "CommonResponseParam.h"
#include "AProtocolMessage.h"
#include "SysAgreeKPI.generated.h"

class UObject;

UCLASS(Blueprintable)
class USysAgreeKPI : public UAProtocolMessage {
    GENERATED_BODY()
public:
    USysAgreeKPI();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void RequestParamFromJson(UObject* WorldContextObject, const FString& Json, int32& agreeFlg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FCommonResponseParam& Param);
    
};

