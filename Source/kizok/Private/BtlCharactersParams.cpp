#include "BtlCharactersParams.h"

int32 UBtlCharactersParams::GetUID(PLAYER_ID Pid) {
    return 0;
}

int32 UBtlCharactersParams::GetPlayersNum() {
    return 0;
}

TArray<FBtlChParams> UBtlCharactersParams::GetPlayers() {
    return TArray<FBtlChParams>();
}

int32 UBtlCharactersParams::GetEnemiesNum() {
    return 0;
}

TArray<FBtlChParams> UBtlCharactersParams::GetEnemies() {
    return TArray<FBtlChParams>();
}

FBtlChParams UBtlCharactersParams::GetCharaParamFromUID(int32 Uid) {
    return FBtlChParams{};
}

FBtlChParams UBtlCharactersParams::GetCharaParamFromPID(PLAYER_ID Pid) {
    return FBtlChParams{};
}

TArray<FBtlChParams> UBtlCharactersParams::GetAllCharas() {
    return TArray<FBtlChParams>();
}

UBtlCharactersParams::UBtlCharactersParams() {
}

