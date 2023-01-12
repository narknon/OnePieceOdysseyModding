#pragma once
#include "CoreMinimal.h"
#include "EKizokTalkWindowType.generated.h"

UENUM(BlueprintType)
enum class EKizokTalkWindowType : uint8 {
    None,
    Normal,
    Chara,
    Headline,
    YesNo,
    YesNoChara,
    YesNoOnly,
    YesNoHeadline,
    Choice,
    ChoiceChara,
    ChoiceOnly,
    ChoiceHeadline,
    Select,
    SelectChara,
    SelectOnly,
    SelectHeadline,
    ID,
    IDChara,
    IDOnly,
    IDHeadline,
    End,
    EndChara,
    EndHeadline,
};

