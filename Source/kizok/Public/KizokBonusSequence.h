#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokBonusSequence.generated.h"

class UKizokBonusDialogMenu;
class UKizokBonusData;
class UKizokDialogMenu;

UCLASS(Blueprintable)
class KIZOK_API UKizokBonusSequence : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBonusData* BonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBonusDialogMenu* BonusDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDialogMenu* ErrorDialog;
    
public:
    UKizokBonusSequence();
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishErrorDialog();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishBonusDialog();
    
};

