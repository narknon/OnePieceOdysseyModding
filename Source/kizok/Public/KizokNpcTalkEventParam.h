#pragma once
#include "CoreMinimal.h"
#include "KizokNpcTalkEventParam.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokNpcTalkEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DelayTalkTime;
    
    FKizokNpcTalkEventParam();
};

