#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokGimmickBase.generated.h"

class UKizokControlByQuestComponent;
class UKizokSEComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokGimmickBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSEComponent* SEComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokControlByQuestComponent* ControlByQuestComponent;
    
    AKizokGimmickBase();
    UFUNCTION(BlueprintCallable)
    int32 PlaySEWithCuesheet(FName Name);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayDirectAtomCue(FName Name);
    
};

