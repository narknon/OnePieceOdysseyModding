#include "KizokChapterResultMenu.h"

class UUserWidget;
class UScrollBox;
class UVerticalBox;

void UKizokChapterResultMenu::SkipSkillMenu() {
}


void UKizokChapterResultMenu::SetScrollLength(float InScrollLength) {
}

void UKizokChapterResultMenu::SetPlayAnimationFlag(bool IsEnable) {
}


bool UKizokChapterResultMenu::SetNextInSkillWidget() {
    return false;
}

bool UKizokChapterResultMenu::SetNextInCharaWidget() {
    return false;
}

void UKizokChapterResultMenu::RegisterVerticalBox(uint8 Index, UVerticalBox* InVerticalBox) {
}

void UKizokChapterResultMenu::RegisterLoopAnimationWidget(UUserWidget* InWidget) {
}

void UKizokChapterResultMenu::NextChara() {
}

void UKizokChapterResultMenu::NextAcceFrameCharacter() {
}

bool UKizokChapterResultMenu::IsPlayAnimationFlag() const {
    return false;
}

bool UKizokChapterResultMenu::IsFixAcceFrame() const {
    return false;
}


bool UKizokChapterResultMenu::InitializeChapterResult(UScrollBox* InScrollBox) {
    return false;
}

FSoftObjectPath UKizokChapterResultMenu::GetSkillIconPath(uint8 Index) const {
    return FSoftObjectPath{};
}

EKizokChapterResultSkillCubeType UKizokChapterResultMenu::GetSkillCubeType(int32 InCharaIndex, int32 InSkillIndex, uint8 InCubeNum) const {
    return EKizokChapterResultSkillCubeType::Set;
}

FName UKizokChapterResultMenu::GetPlayerID(int32 Index) const {
    return NAME_None;
}

TArray<FKizokChapterResultSkillCubeData> UKizokChapterResultMenu::GetNowSkillCubeData() const {
    return TArray<FKizokChapterResultSkillCubeData>();
}

uint8 UKizokChapterResultMenu::GetNowCharaWidgetIndex() const {
    return 0;
}

FKizokChapterResultAcceFrameData UKizokChapterResultMenu::GetNowAcceFrameData() const {
    return FKizokChapterResultAcceFrameData{};
}

EKizokChapterResultState UKizokChapterResultMenu::GetMenuState() const {
    return EKizokChapterResultState::ReleaseSkill;
}

bool UKizokChapterResultMenu::GetIsSkipSkillMenu() const {
    return false;
}

FSoftObjectPath UKizokChapterResultMenu::GetCharaImage(uint8 playerID) const {
    return FSoftObjectPath{};
}

void UKizokChapterResultMenu::FinishSkillRelease() {
}



void UKizokChapterResultMenu::DoFixProduction() {
}


void UKizokChapterResultMenu::ChangeAcceFrame() {
}

void UKizokChapterResultMenu::AddReleaseSkill(FName InSkillId, uint8 InRank) {
}

UKizokChapterResultMenu::UKizokChapterResultMenu() {
    this->AcceFrameDataTable = NULL;
}

