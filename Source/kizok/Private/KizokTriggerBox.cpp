#include "KizokTriggerBox.h"
#include "KizokDebugComponent.h"
#include "KizokTextRenderComponent.h"

AKizokTriggerBox::AKizokTriggerBox() {
    this->IsEditorTickEnable = false;
    this->DebugComponent = CreateDefaultSubobject<UKizokDebugComponent>(TEXT("DebugComponent"));
    this->TextComponent = CreateDefaultSubobject<UKizokTextRenderComponent>(TEXT("TextComponent"));
}

