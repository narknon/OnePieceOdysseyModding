#pragma once
#include "CoreMinimal.h"
#include "SaveDataHead.h"
#include "SaveDataLvd.h"
#include "KizokPlayerPartyData.h"
#include "KizokPlayerSaveData.h"
#include "KizokItemSaveData.h"
#include "KizokAccessorySaveData.h"
#include "KizokAccessoryEquipSaveData.h"
#include "KizokShopStockSaveData.h"
#include "KizokAreaSaveData.h"
#include "KizokFastTravelSaveData.h"
#include "KizokPlayerInfoData.h"
#include "KizokAchievementSaveData.h"
#include "KizokLogSaveData.h"
#include "KizokCeBankSkillLearnedSaveData.h"
#include "KizokDemoSaveData.h"
#include "KizokGameSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokGameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataHead SaveHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataLvd LvdSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokPlayerPartyData PartySection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokPlayerSaveData PlayerSection[18];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokItemSaveData ItemData[500];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokAccessorySaveData AccessoryData[573];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokAccessoryEquipSaveData AccessoryEquipData[108];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokShopStockSaveData ShopStockSection[300];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HelpNoticeIconData[128];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokAreaSaveData AreaData[46];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFastTravelSaveData FastTravelData[128];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokPlayerInfoData PlayerInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PictureBookReadFlag[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokAchievementSaveData AchievementData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokLogSaveData LogData[256];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokCeBankSkillLearnedSaveData CeBankSkillLearnedData[16];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokDemoSaveData DemoData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KitchenTypeNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FactoryTypeNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CostumeChangeChara;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[293270];
    
    KIZOK_API FKizokGameSaveData();
};

