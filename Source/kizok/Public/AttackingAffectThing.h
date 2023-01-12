#pragma once
#include "CoreMinimal.h"
#include "AttackingAffect.h"
#include "AttackingAffectThing.generated.h"

class UKizokBattleCharaBase;

USTRUCT(BlueprintType)
struct FAttackingAffectThing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Attackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackingAffect> AttackingAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokBattleCharaBase*> AttackersBCBs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokBattleCharaBase*> TargetsBCBs;
    
    KIZOK_API FAttackingAffectThing();
};

