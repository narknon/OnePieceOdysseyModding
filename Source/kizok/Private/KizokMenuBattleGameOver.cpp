#include "KizokMenuBattleGameOver.h"

void UKizokMenuBattleGameOver::Update(float DeltaTime) {
}

void UKizokMenuBattleGameOver::StopGameOverJingle() {
}

void UKizokMenuBattleGameOver::PlayGameOverJingle() {
}

bool UKizokMenuBattleGameOver::IsPlayingGameOverJingle() {
    return false;
}

void UKizokMenuBattleGameOver::EndGameOver() {
}

UKizokMenuBattleGameOver::UKizokMenuBattleGameOver() {
    this->ToSkipTime = 0.50f;
    this->JingleHandle = 0;
}

