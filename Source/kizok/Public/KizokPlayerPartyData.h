#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "KizokPlayerPartyData.generated.h"

USTRUCT(BlueprintType)
struct FKizokPlayerPartyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Money;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 KizunaArtsState[32];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KizunaLineValue[64];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleFormationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BtlGroupIndices[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PLAYER_ID Party[38];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Join[38];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BanquetBonus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[286];
    
    KIZOK_API FKizokPlayerPartyData();
};

