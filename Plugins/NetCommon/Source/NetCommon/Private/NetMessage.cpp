#include "NetMessage.h"

class UObject;
class UNetMessage;

FString UNetMessage::ToJson() {
    return TEXT("");
}

UNetMessage* UNetMessage::Set(int32 ID, const TArray<uint8>& Data) {
    return NULL;
}

FString UNetMessage::DumpHttpHeader(const FString& prefix) {
    return TEXT("");
}

FString UNetMessage::DumpHttp(const FString& prefix) {
    return TEXT("");
}

FString UNetMessage::Dump(const FString& prefix) {
    return TEXT("");
}

UNetMessage* UNetMessage::Create(UObject* WorldContextObject) {
    return NULL;
}

UNetMessage::UNetMessage() {
}

