#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProtocolHelper.generated.h"

class UObject;
class UNetMessage;
class UAProtocolMessage;

UCLASS(Blueprintable)
class CEBANK_API UProtocolHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProtocolHelper();
private:
    UFUNCTION(BlueprintCallable)
    static void HandleSocketResponse(UNetMessage* msg, const FString& userId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAProtocolMessage* EditRequestByName(UObject* WorldContextObject, const FString& Name, const FString& Json);
    
    UFUNCTION(BlueprintCallable)
    static FString DumpSocketMessage(const FString& prefix, UNetMessage* msg);
    
    UFUNCTION(BlueprintCallable)
    static FString DumpHttpMessage(const FString& prefix, UAProtocolMessage* Request, UNetMessage* Response);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAProtocolMessage* CreateRequestByName(UObject* WorldContextObject, const FString& Name);
    
};

