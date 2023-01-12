#include "KizokBattleMenuManager.h"

class UKizokUserWidget;
class UKizokMenuBattleArtsSelect;
class UKizokMenuBattlePartySelect;
class UKizokMenuBattleKiznaCharge;
class UKizokMenuBattleItem;
class UKizokMenuBattleSubCmd;
class UKizokMenuBattleSkill;

bool UKizokBattleMenuManager::IsValiableWindow(EBtlWidgetType Type) {
    return false;
}

UKizokMenuBattleSubCmd* UKizokBattleMenuManager::GetSubCmdWidget() {
    return NULL;
}

UKizokMenuBattleSkill* UKizokBattleMenuManager::GetSkillWidget() {
    return NULL;
}

UKizokMenuBattlePartySelect* UKizokBattleMenuManager::GetPartySelectWidget() {
    return NULL;
}

UKizokUserWidget* UKizokBattleMenuManager::GetMenuWidget(EBtlWidgetType Type) {
    return NULL;
}

UKizokMenuBattleKiznaCharge* UKizokBattleMenuManager::GetKiznaGaugeWidget() {
    return NULL;
}

UKizokMenuBattleItem* UKizokBattleMenuManager::GetItemWidget() {
    return NULL;
}

UKizokMenuBattleArtsSelect* UKizokBattleMenuManager::GetArtsWidget() {
    return NULL;
}

UKizokBattleMenuManager::UKizokBattleMenuManager() {
    this->m_SituationWidget = NULL;
    this->m_BattleMainWidget = NULL;
    this->m_BattleCmdWidget = NULL;
    this->m_BattleGroupOrderWidget = NULL;
    this->m_BattleKiznaChargeWidget = NULL;
    this->m_BattleResultWidget = NULL;
    this->m_BattleItem = NULL;
    this->m_BattleSubCmd = NULL;
    this->m_BattlePartySelect = NULL;
    this->m_BattleSkill = NULL;
    this->m_BattleArts = NULL;
    this->m_HitMarkManager = NULL;
    this->m_playerController = NULL;
    this->BtlSeqController = NULL;
    this->DbgParam = NULL;
}

