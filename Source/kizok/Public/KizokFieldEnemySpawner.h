#pragma once
#include "CoreMinimal.h"
#include "FieldEnemyLot.h"
#include "GameFramework/Actor.h"
#include "KizokFieldEnemySpawner.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokFieldEnemySpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyPartyLotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelSetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChaseLevelGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float inhibitRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OutputLog;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableURO;
    
public:
    AKizokFieldEnemySpawner();
    UFUNCTION(BlueprintCallable)
    void StartRespawnTimer(float Timer);
    
    UFUNCTION(BlueprintCallable)
    void StartBattle();
    
    UFUNCTION(BlueprintCallable)
    void SetPartyLotID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyLot(TArray<FFieldEnemyLot> lot);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool NewIsActive);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
protected:
    UFUNCTION(BlueprintCallable)
    FName GetPartyID(FName LotID);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyLotNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<FFieldEnemyLot> GetEnemyLot();
    
    UFUNCTION(BlueprintCallable)
    bool ForceSpawn(int32 Index, bool IgnoreDistanceCheck, bool IgnoreViewportCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FieldEnemySpawned();
    
    UFUNCTION(BlueprintCallable)
    void EndBattle();
    
    UFUNCTION(BlueprintCallable)
    bool DestroySpawnedEnemy();
    
};

