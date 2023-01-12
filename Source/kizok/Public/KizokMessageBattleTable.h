#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageBattleTableType.h"
#include "KizokSoundDataTable.h"
#include "KizokMessageDataTable.h"
#include "UObject/Object.h"
#include "KizokMessageBattleTable.generated.h"

class UAtomCueSheetLoaderComponent;
class UKizokSEComponent;
class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokMessageBattleTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokMessageDataTable> EachRegionTableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokSoundDataTable> EachRegionSoundMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMessageDataTable AllRegionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSoundDataTable AllRegionSound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageTableList[6];
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSEComponent* SoundComponentList[2];
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomCueSheetLoaderComponent* SoundLoaderList[2];
    
public:
    UKizokMessageBattleTable();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetMessageTable(EKizokMessageBattleTableType InTableType) const;
    
};

