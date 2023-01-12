#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "BtlChParams.h"
#include "UObject/Object.h"
#include "BtlCharactersParams.generated.h"

UCLASS(Blueprintable)
class UBtlCharactersParams : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBtlChParams> Charas;
    
    UBtlCharactersParams();
    UFUNCTION(BlueprintCallable)
    int32 GetUID(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayersNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlChParams> GetPlayers();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemiesNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlChParams> GetEnemies();
    
    UFUNCTION(BlueprintCallable)
    FBtlChParams GetCharaParamFromUID(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    FBtlChParams GetCharaParamFromPID(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlChParams> GetAllCharas();
    
};

