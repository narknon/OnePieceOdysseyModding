#pragma once
#include "CoreMinimal.h"
#include "BtlGroupInfo.h"
#include "UObject/Object.h"
#include "BtlGroups.generated.h"

UCLASS(Blueprintable)
class UBtlGroups : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlGroupInfo> Groups;
    
    UBtlGroups();
    UFUNCTION(BlueprintCallable)
    bool IsSameGroup(int32 uid1, int32 uid2);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetUIDListInGroupFromUID(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetUIDListInGroupFromGrpIdx(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGroupIndexFromUID(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlGroupInfo> GetAllGroupsInfo();
    
};

