#pragma once
#include "CoreMinimal.h"
#include "EBtlButtonGuideType.h"
#include "EBtlMainMesWindow.h"
#include "BtlMesChoiceInfo.h"
#include "BtlButtonCmdWindow.generated.h"

USTRUCT(BlueprintType)
struct FBtlButtonCmdWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMainMesWindow MessageWindowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CmdDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlMesChoiceInfo> ChoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBtlButtonGuideType> GuideList;
    
    KIZOK_API FBtlButtonCmdWindow();
};

