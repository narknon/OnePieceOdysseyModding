#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "KizokBaseCharacter.generated.h"

class UKizokEffectFootprintsControl;

UCLASS(Blueprintable)
class KIZOK_API AKizokBaseCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokEffectFootprintsControl* FootprintsControl;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokEffectFootprintsControl> LufFootControlClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokEffectFootprintsControl> UsoFootControlClass;
    
    AKizokBaseCharacter();
    UFUNCTION(BlueprintCallable)
    void SetMoveTarget(FVector Target);
    
    UFUNCTION(BlueprintCallable)
    bool RotateYawToTarget(FVector Target, float DeltaSeconds, float rps);
    
    UFUNCTION(BlueprintCallable)
    void ResetMoveTarget();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoveTarget();
    
    UFUNCTION(BlueprintCallable)
    bool IsMotionPlay();
    
    UFUNCTION(BlueprintCallable)
    float GetRotateYawToTarget(FVector Target);
    
    UFUNCTION(BlueprintCallable)
    float GetMotionTime();
    
    UFUNCTION(BlueprintCallable)
    float GetMotionLength();
    
};

