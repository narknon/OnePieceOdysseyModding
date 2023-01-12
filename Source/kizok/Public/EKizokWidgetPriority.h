#pragma once
#include "CoreMinimal.h"
#include "EKizokWidgetPriority.generated.h"

UENUM(BlueprintType)
enum class EKizokWidgetPriority : uint8 {
    Invalid,
    Field = 0x10,
    MiniMap = 0x20,
    Telop = 0x30,
    FadeVisibleWindow = 0x40,
    EndCredits = 0x50,
    CommonMenu = 0x60,
    BattleMenu = 0x65,
    TalkWindow = 0x70,
    Title = 0x75,
    AutoSave = 0x7A,
    Menu = 0x80,
    Licence = 0x82,
    DisplaySetting,
    BattleTalk = 0x85,
    CSMessage = 0x90,
    DialogWindow = 0xA0,
    Loading = 0xF0,
    Fade = 0xF5,
    ChapterTitle,
    Skip,
    SkipFade,
};

