#include "BtlGroups.h"

bool UBtlGroups::IsSameGroup(int32 uid1, int32 uid2) {
    return false;
}

TArray<int32> UBtlGroups::GetUIDListInGroupFromUID(int32 Uid) {
    return TArray<int32>();
}

TArray<int32> UBtlGroups::GetUIDListInGroupFromGrpIdx(int32 Index) {
    return TArray<int32>();
}

int32 UBtlGroups::GetGroupIndexFromUID(int32 Uid) {
    return 0;
}

TArray<FBtlGroupInfo> UBtlGroups::GetAllGroupsInfo() {
    return TArray<FBtlGroupInfo>();
}

UBtlGroups::UBtlGroups() {
}

