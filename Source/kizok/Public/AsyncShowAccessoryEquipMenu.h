#pragma once
#include "CoreMinimal.h"
#include "AsyncShowAccessoryEquipMenuCompleteDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncShowAccessoryEquipMenu.generated.h"

class UObject;
class UAsyncShowAccessoryEquipMenu;

UCLASS(Blueprintable)
class KIZOK_API UAsyncShowAccessoryEquipMenu : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncShowAccessoryEquipMenuComplete Completed;
    
public:
    UAsyncShowAccessoryEquipMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnAsyncComplete();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncShowAccessoryEquipMenu* AsyncShowAccessoryEquipMenu(UObject* WorldContextObject);
    
};

