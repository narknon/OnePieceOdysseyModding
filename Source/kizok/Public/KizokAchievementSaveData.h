#pragma once
#include "CoreMinimal.h"
#include "KizokAchievementSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokAchievementSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSubQuestClearArray[64];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VictoryBattleAreaArray[64];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 WantedCaughtRegionArray[64];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CollectInformationArray[64];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OpenTreasureBoxAreaArray[64];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollectAchievementArray[128];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSubEventClearArray[64];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFourEffectAccessoryCreate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SubQuestClear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 WantedCaught;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KizunaQuestClear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UseKarakuriBall;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KarakuriBallCreateType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KarakuriBallCreate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UseCuisine;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CuisineCreateType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CuisineCreate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AccessorySynthesis;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CostumeChange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CollectLog;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CollectAchievement;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LevelOverSeventy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VictoryBattle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DoParty;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BerryAcquire;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KizunaArtsInvocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LuffyAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ZoroAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UsoppAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ChopperAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RobinAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SanjiAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NamiAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FlunkyAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EscapeBattle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CostumeChangeCrew;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OpenTreasureBox;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CubePieceCollect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StrongBoss;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AllStrongBoss;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OnceAttackDamage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CrewLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[379];
    
    KIZOK_API FKizokAchievementSaveData();
};

