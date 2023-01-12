#include "KizokGlobalDataTable.h"

class UDataTable;

UDataTable* UKizokGlobalDataTable::GetMapSymbolDataTable() const {
    return NULL;
}

UDataTable* UKizokGlobalDataTable::GetFastTravelDataTable() const {
    return NULL;
}

UKizokGlobalDataTable::UKizokGlobalDataTable() {
    this->TextTable = NULL;
    this->ItemTable = NULL;
    this->ItemStrTable = NULL;
    this->AccessoryTable = NULL;
    this->AccessoryStrTable = NULL;
    this->AcceParamTable = NULL;
    this->PlayerMontageTable = NULL;
    this->CharaNameTable = NULL;
    this->MapMaterialTable = NULL;
    this->MapIconTable = NULL;
    this->MapIconNameTable = NULL;
    this->MapSymbolTable = NULL;
    this->FastTravelTable = NULL;
    this->RegionContrastTable = NULL;
    this->AreaNameTable = NULL;
    this->TreasureItemTable = NULL;
    this->DestructItemTable = NULL;
    this->KiraKiraRotItemTable = NULL;
    this->KiraKiraItemTable = NULL;
    this->WeaponMontageTable = NULL;
    this->WeaponMontageInBattleTable = NULL;
    this->LookAtLimitTable = NULL;
    this->CSLookAtLimitTable = NULL;
    this->EnemyLotteryPartyIdTable = NULL;
    this->EyeBlinkTable = NULL;
    this->FacialPoseTable = NULL;
    this->CostumeTable = NULL;
    this->ButtonGuideTable = NULL;
    this->CSLoopAnimBlendParamTable = NULL;
    this->RoomAmbientTable = NULL;
    this->GammaValueTable = NULL;
    this->SkillNameTable = NULL;
    this->SKillAttrTable = NULL;
    this->RegionNameTable = NULL;
    this->RoomNameTable = NULL;
    this->SequencerNameTable = NULL;
    this->SecondarySettingTable = NULL;
    this->PhysicsWindRateTable = NULL;
    this->CharacterWindRateTable = NULL;
    this->ExpSettingTable = NULL;
    this->AchievementTable = NULL;
    this->LogTable = NULL;
    this->GroupTalkSearchPath = NULL;
    this->TextureStreamingSettingTable = NULL;
    this->TextureStreamingOverrideCSTable = NULL;
    this->TextureStreamingOverrideGTTable = NULL;
    this->TextureStreamingOverrideBattleTable = NULL;
    this->FaceIconTable = NULL;
}

