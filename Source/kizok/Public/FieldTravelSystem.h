#pragma once
#include "CoreMinimal.h"
#include "EFieldAsyncTaskListType.h"
#include "FieldTravelEventDelegate.h"
#include "UObject/Object.h"
#include "FieldTravelSystem.generated.h"

class UFieldAsyncTask;
class IFieldAsyncTask;

UCLASS(Blueprintable)
class KIZOK_API UFieldTravelSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnStartTravelFadeOutOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnStartTravelFadeOutContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnTravelWarpOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnTravelWarpContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnStartTravelFadeInOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnStartTravelFadeInContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnEndTravelFadeInOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnEndTravelFadeInContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnEndTravelOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTravelEvent OnEndTravelContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SystemPostTravelTasks;
    
public:
    UFieldTravelSystem();
    UFUNCTION(BlueprintCallable)
    void RemovePostTravel(const TScriptInterface<IFieldAsyncTask> task);
    
    UFUNCTION(BlueprintCallable)
    void CloseFastTravelLoadingUI();
    
    UFUNCTION(BlueprintCallable)
    void AddPostTravelTask(const TScriptInterface<IFieldAsyncTask> task, const EFieldAsyncTaskListType listType);
    
};

