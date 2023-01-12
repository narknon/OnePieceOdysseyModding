#pragma once
#include "CoreMinimal.h"
#include "KizokOnCSSkipEventDelegate.h"
#include "GameFramework/Actor.h"
#include "KizokCSSkipManager.generated.h"

class UObject;
class UKizokCSSkipWidget;

UCLASS(Blueprintable)
class KIZOK_API AKizokCSSkipManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipEnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokCSSkipWidget> CSSkipWidgetClassPtr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokCSSkipWidget* SkipWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnCSSkipEvent OnSkipEvent;
    
public:
    AKizokCSSkipManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SkipEnable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNotAutoSkipEnable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetBanSkipEnable(const UObject* WorldContextObject, bool IsEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkipRunEvent();
    
};

