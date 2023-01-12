#pragma once
#include "CoreMinimal.h"
#include "ResponseHeader.h"
#include "UserCreateResponseParam.h"
#include "AProtocolMessage.h"
#include "UserCreate.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUserCreate : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UUserCreate();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void RequestParamFromJson(UObject* WorldContextObject, const FString& Json, FString& pUserId, int32& skuType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FUserCreateResponseParam& Param);
    
};

