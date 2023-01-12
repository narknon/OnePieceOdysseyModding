#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokSystemSaveSequence.generated.h"

class UKizokDialogMenu;

UCLASS(Blueprintable)
class KIZOK_API UKizokSystemSaveSequence : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDialogMenu* DialogWindow;
    
public:
    UKizokSystemSaveSequence();
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishSystemSave();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishDialogWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnErrorDialogWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseDialogWindow();
    
};

