#pragma once
#include "CoreMinimal.h"
#include "KizokPlayerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokPlayerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Exp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Tp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AilmentBits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ValidSkillStateNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 SkillState[64];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[492];
    
    KIZOK_API FKizokPlayerSaveData();
};

