#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "EBtlWidgetType.h"
#include "BattleSubMenu.h"
#include "PlayerIconPathList.h"
#include "UObject/Object.h"
#include "KizokBattleMenuManager.generated.h"

class UKizokUserWidget;
class UKizokBattleSeqController;
class UBtlMenuDebugParams;
class UKizokBattleHitMarkManager;
class APlayerController;
class UKizokMenuBattleGroupOrder;
class UKizokMenuBattleCmd;
class UKizokMenuBattleArtsSelect;
class UKizokMenuBattleResult;
class UKizokMenuBattlePartySelect;
class UKizokMenuBattleMain;
class UKizokMenuBattleKiznaCharge;
class UKizokMenuBattleItem;
class UKizokMenuBattleSubCmd;
class UKizokMenuBattleSkill;
class UKizokMenuBattleSituation;

UCLASS(Blueprintable)
class KIZOK_API UKizokBattleMenuManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleSituation* m_SituationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleMain* m_BattleMainWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleCmd* m_BattleCmdWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleGroupOrder* m_BattleGroupOrderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleKiznaCharge* m_BattleKiznaChargeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleResult* m_BattleResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleItem* m_BattleItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleSubCmd* m_BattleSubCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattlePartySelect* m_BattlePartySelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleSkill* m_BattleSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleArtsSelect* m_BattleArts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleHitMarkManager* m_HitMarkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_playerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleSeqController* BtlSeqController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, FPlayerIconPathList> CharaIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlMenuDebugParams* DbgParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlWidgetType, FBattleSubMenu> SubMenuWidgetRefList;
    
public:
    UKizokBattleMenuManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValiableWindow(EBtlWidgetType Type);
    
    UFUNCTION(BlueprintCallable)
    UKizokMenuBattleSubCmd* GetSubCmdWidget();
    
    UFUNCTION(BlueprintCallable)
    UKizokMenuBattleSkill* GetSkillWidget();
    
    UFUNCTION(BlueprintCallable)
    UKizokMenuBattlePartySelect* GetPartySelectWidget();
    
    UFUNCTION(BlueprintCallable)
    UKizokUserWidget* GetMenuWidget(EBtlWidgetType Type);
    
    UFUNCTION(BlueprintCallable)
    UKizokMenuBattleKiznaCharge* GetKiznaGaugeWidget();
    
    UFUNCTION(BlueprintCallable)
    UKizokMenuBattleItem* GetItemWidget();
    
    UFUNCTION(BlueprintCallable)
    UKizokMenuBattleArtsSelect* GetArtsWidget();
    
};

