#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnRareEnemyIconVisibleDelegate.h"
#include "KizokFieldNPCCharacter.h"
#include "KizokFieldNPCEnemyCharacter.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class KIZOK_API AKizokFieldNPCEnemyCharacter : public AKizokFieldNPCCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRareEnemyIconVisible OnRareEnemyIconVisible;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> EnemyAnimClass;
    
public:
    AKizokFieldNPCEnemyCharacter();
    UFUNCTION(BlueprintCallable)
    void SetPartyID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMapID(const FName& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChasePlayerLvGap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPartyID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBattleMapID() const;
    
};

