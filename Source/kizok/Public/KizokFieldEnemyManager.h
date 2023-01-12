#pragma once
#include "CoreMinimal.h"
#include "ieldEnemySpawnerGroupData.h"
#include "UObject/Object.h"
#include "KizokFieldEnemyManager.generated.h"

class AKizokFieldNPCEnemyCharacter;
class AKizokFieldEnemySpawner;

UCLASS(Blueprintable)
class KIZOK_API UKizokFieldEnemyManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveSpawnerNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, AKizokFieldNPCEnemyCharacter*> FieldEnemyBases;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, AKizokFieldEnemySpawner*> FieldEnemySpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FieldEnemySpawnerGroupData> FieldEnemySpawnersGroup;
    
public:
    UKizokFieldEnemyManager();
    UFUNCTION(BlueprintCallable)
    void RestartRespawnTimer(AKizokFieldNPCEnemyCharacter* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKizokFieldEnemySpawner* GetFieldEnemySpawner(FName Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKizokFieldNPCEnemyCharacter* GetFieldEnemy(FName Tag) const;
    
};

