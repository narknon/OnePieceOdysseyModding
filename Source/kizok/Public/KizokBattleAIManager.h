#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "EBattleAIKizunaAttr.h"
#include "ASP_SKILLTYPES.h"
#include "ANOMALIES.h"
#include "GameFramework/Actor.h"
#include "KizokBattleAIManager.generated.h"

class UBtlCharactersParams;
class UBtlGroups;
class UBehaviorTreeComponent;
class UBehaviorTree;
class UBlackboardComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokBattleAIManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlCharactersParams* characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGroups* Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinished;
    
public:
    AKizokBattleAIManager();
    UFUNCTION(BlueprintCallable)
    bool WhetherMadePowerAttack(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    bool WasMomentMeteoWeaponDownThisTurn();
    
    UFUNCTION(BlueprintCallable)
    bool WasMomentMeteoWeaponAscendThisCycle();
    
    UFUNCTION(BlueprintCallable)
    ASP_SKILLTYPES SkillTypeNameToASP(FName SkillTypeName);
    
    UFUNCTION(BlueprintCallable)
    void SetPalaAttackReservation();
    
    UFUNCTION(BlueprintCallable)
    void SetMeteoWeaponTargetedGroup(int32 grpid);
    
    UFUNCTION(BlueprintCallable)
    void ResetPalaAttackReservation();
    
    UFUNCTION(BlueprintCallable)
    bool OnBattleMap(int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    void MarkMadePowerAttack(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    bool IsSummonable(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    bool IsMultipleAttackKizunaArts(FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    bool IsKizunaMove(FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    bool IsIvokeableSkillBySp(int32 ownUid, FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnomaried(int32 TgtUID, ANOMALIES anomaly);
    
    UFUNCTION(BlueprintCallable)
    bool InSameGroup(int32 ownUid, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    bool InAnotherGroup(int32 ownUid, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    bool HasPalaAttackReservation();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetZeroCostAtkSkillID(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetUsableKizunaAtrsID(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetTargetableUidListByItem(int32 ownUid, FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetTargetableUidList(int32 ownUid, FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    FName GetTableID(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSumOfEffectValue(int32 ownUid, FName SkillID, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetSummonSkillList(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    float GetSPperSPMAX(int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpCost(FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetSkillListSPUsable(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetSkillListForUsableSpecials(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOwnSP(int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOwnHP(int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMeteoWeaponsState();
    
    UFUNCTION(BlueprintCallable)
    float GetLevelAverageInGroup(int32 ownUid, int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLevel(int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetKizunaValue();
    
    UFUNCTION(BlueprintCallable)
    int32 GetKizunaCost(FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    TArray<PLAYER_ID> GetKizunaArtsInvokeMembers(FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    TArray<EBattleAIKizunaAttr> GetKizunaArtsExAttr(FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetItemListForUsable(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    float GetHPperHPMAX(int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGroupID(int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    FName GetEnemyPartyId();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemiesNumOnBattleMap(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemiesNumInGroup(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEffectiveTargetNumByItem(int32 ownUid, FName ItemId, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEffectiveTargetNum(int32 ownUid, FName SkillID, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDisabilityPrediction(int32 ownUid, FName SkillID, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    FName GetDefaultAtkSkillID(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDeathPrediction(int32 ownUid, FName SkillID, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleCycle();
    
    UFUNCTION(BlueprintCallable)
    float GetAvarageOfEffectValue(int32 ownUid, FName SkillID, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllSkillList(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, float> GetAllSkillAndRate(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllKizunaAtrsSkillID(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAlliesNumOnBattleMap(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAlliesNumInGroup(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDecide();
    
    UFUNCTION(BlueprintCallable)
    FName DrawUseSkill(int32 ownUid, TArray<FName> SkillList);
    
    UFUNCTION(BlueprintCallable)
    int32 DrawTarget(TArray<int32> UidList);
    
    UFUNCTION(BlueprintCallable)
    void DecideUseItem(int32 ownUid, FName ItemId, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    void DecideSkillAndTarget(int32 ownUid, FName SkillID, int32 TgtUID);
    
    UFUNCTION(BlueprintCallable)
    void DecideIgnore(int32 ownUid);
    
    UFUNCTION(BlueprintCallable)
    void DecideFocusEnergy(int32 ownUid);
    
};

