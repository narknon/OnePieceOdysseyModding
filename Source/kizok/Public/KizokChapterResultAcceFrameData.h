#pragma once
#include "CoreMinimal.h"
#include "EKizokChapterResultAcceFrameType.h"
#include "KizokChapterResultAcceFrameData.generated.h"

USTRUCT(BlueprintType)
struct FKizokChapterResultAcceFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 playerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokChapterResultAcceFrameType AcceFrame1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokChapterResultAcceFrameType AcceFrame2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFixProduction;
    
    KIZOK_API FKizokChapterResultAcceFrameData();
};

