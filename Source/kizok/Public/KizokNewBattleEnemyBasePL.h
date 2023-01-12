#pragma once
#include "CoreMinimal.h"
#include "KizokNewBattleEnemyBase.h"
#include "KizokNewBattleEnemyBasePL.generated.h"

class ASkeletalMeshActor;
class ULevelSequence;

UCLASS(Blueprintable)
class KIZOK_API AKizokNewBattleEnemyBasePL : public AKizokNewBattleEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* ThornBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* ThornBreakWithPala;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverridePtyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkeletalMeshActor* BGPalaSK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillidOfNeedProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillidOfNeedProcessDir;
    
    AKizokNewBattleEnemyBasePL();
};

