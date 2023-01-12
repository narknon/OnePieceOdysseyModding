#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "KizokSkillUpMenuSkillData.h"
#include "KizokSkillUpMenuCharaData.generated.h"

USTRUCT(BlueprintType)
struct FKizokSkillUpMenuCharaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PLAYER_ID playerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokSkillUpMenuSkillData> SkillDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsableCubeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsableCubeNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipTpCostDown;
    
    KIZOK_API FKizokSkillUpMenuCharaData();
};

