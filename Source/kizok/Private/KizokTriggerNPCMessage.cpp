#include "KizokTriggerNPCMessage.h"

class AKizokNpcBase;

bool AKizokTriggerNPCMessage::StartNPCTalkSet() {
    return false;
}

void AKizokTriggerNPCMessage::SetRepeat(bool flag) {
}

bool AKizokTriggerNPCMessage::IsTalkEnd() const {
    return false;
}

bool AKizokTriggerNPCMessage::IsRepeat() const {
    return false;
}

void AKizokTriggerNPCMessage::CallNPCNextTalkInfo(const FName& ID, const int32& Index) {
}

void AKizokTriggerNPCMessage::CallNPCEndTalk(const AKizokNpcBase* npc) {
}

AKizokTriggerNPCMessage::AKizokTriggerNPCMessage() {
    this->Repeat = false;
}

