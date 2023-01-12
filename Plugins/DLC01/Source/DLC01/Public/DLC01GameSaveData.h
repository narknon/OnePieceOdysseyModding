#pragma once
#include "CoreMinimal.h"
#include "DLC01PlayerInfoData.h"
#include "DLC01GameSaveData.generated.h"

USTRUCT(BlueprintType)
struct FDLC01GameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsPlayingDLC01: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Padding00[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Padding01[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLC01PlayerInfoData PlayerInfoData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[880];
    
    DLC01_API FDLC01GameSaveData();
};

