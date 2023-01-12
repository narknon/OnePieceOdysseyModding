#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokBattleSeqController.generated.h"

class UKizokBattleCharaBase;
class UKizokParticleInstance;

UCLASS(Blueprintable)
class UKizokBattleSeqController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokBattleCharaBase*> Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokBattleCharaBase*> Enemies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleCharaBase* CurChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleCharaBase* CurCharEvacuator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UKizokParticleInstance*> MWTargetMarkers;
    
public:
    UKizokBattleSeqController();
    UFUNCTION(BlueprintCallable)
    void FinishTutorialMenu();
    
};

