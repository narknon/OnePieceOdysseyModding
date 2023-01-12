#include "ProtocolHelper.h"

class UObject;
class UNetMessage;
class UAProtocolMessage;

void UProtocolHelper::HandleSocketResponse(UNetMessage* msg, const FString& userId) {
}

UAProtocolMessage* UProtocolHelper::EditRequestByName(UObject* WorldContextObject, const FString& Name, const FString& Json) {
    return NULL;
}

FString UProtocolHelper::DumpSocketMessage(const FString& prefix, UNetMessage* msg) {
    return TEXT("");
}

FString UProtocolHelper::DumpHttpMessage(const FString& prefix, UAProtocolMessage* Request, UNetMessage* Response) {
    return TEXT("");
}

UAProtocolMessage* UProtocolHelper::CreateRequestByName(UObject* WorldContextObject, const FString& Name) {
    return NULL;
}

UProtocolHelper::UProtocolHelper() {
}

