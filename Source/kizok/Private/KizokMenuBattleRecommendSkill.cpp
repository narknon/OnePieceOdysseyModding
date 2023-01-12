#include "KizokMenuBattleRecommendSkill.h"

void UKizokMenuBattleRecommendSkill::UpdateDispListAll(PLAYER_ID playerID) {
}





void UKizokMenuBattleRecommendSkill::ReflectDispAll(PLAYER_ID playerID) {
}



bool UKizokMenuBattleRecommendSkill::GetSkillList(PLAYER_ID playerID, TArray<FBtlMenuSkillInfo>& OutSkillList) {
    return false;
}

FSoftObjectPath UKizokMenuBattleRecommendSkill::GetPlayerIconPath(PLAYER_ID playerID, EKizokCharaIconType IconType) {
    return FSoftObjectPath{};
}

UKizokMenuBattleRecommendSkill::UKizokMenuBattleRecommendSkill() {
    this->SkillListDispMaxNum = 0;
}

