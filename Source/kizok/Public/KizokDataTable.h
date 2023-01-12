#pragma once
#include "CoreMinimal.h"
#include "OnAsyncLoadCompleteDelegate.h"
#include "KizokCharacterTable.h"
#include "KizokGroundLogMovieTableRow.h"
#include "KizokMainStoryTableRow.h"
#include "KizokTableBattleCharAtk.h"
#include "KizokTableBattleCameraAtk.h"
#include "UObject/Object.h"
#include "KizokDataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokDataTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoadComplete OnAsyncLoadComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LandEffectTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleCharAtkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleCameraAtkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FieldEnemyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FieldEnemyLevelDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyPartyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SystemVarListTable;
    
public:
    UKizokDataTable();
    UFUNCTION(BlueprintCallable)
    void UnloadNPCMessageTable();
    
    UFUNCTION(BlueprintCallable)
    void UnloadMessageTable();
    
    UFUNCTION(BlueprintCallable)
    void LoadNPCMessageTable(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void LoadMessageTable(FName InRegionName);
    
    UFUNCTION(BlueprintCallable)
    void InitNPCMessageTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNPCMessageTableName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMessageTableName() const;
    
    UFUNCTION(BlueprintCallable)
    void GetMainStoryTableRow(const FName& RowName, FKizokMainStoryTableRow& MainStoryTableRow, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    FKizokGroundLogMovieTableRow GetGroundLogMovieTableRow(const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokCharacterTable GetCharacterTableBP(const int32& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokTableBattleCharAtk GetBattleCharAtkTableBP(const int32 BattleAtkCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokTableBattleCameraAtk GetBattleCameraAtkTableBP(const int32 BattleAtkCameraID) const;
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadNPCMessageTable(FName Name);
    
};

