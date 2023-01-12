#pragma once
#include "CoreMinimal.h"
#include "OnErrorDelegate2.h"
#include "OnReceiveDelegate2.h"
#include "UObject/Object.h"
#include "NetHttp.generated.h"

class UNetMessage;
class UNetHttp;

UCLASS(Blueprintable)
class UNetHttp : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceive OnReceive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnError OnError;
    
    UNetHttp();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UNetHttp* SetHeader(UObject* WorldContextObject, const FString& titleCd, const FString& userId, const FString& session, int32 Platform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UNetHttp* PostRequest(UObject* WorldContextObject, const FString& URL, UNetMessage* Data, float limitsec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNetHttp* Create(UObject* WorldContextObject);
    
};

