#pragma once
#include "CoreMinimal.h"
#include "EFieldAsyncTaskListType.h"
#include "FieldWarpEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FieldWarpSystem.generated.h"

class UFieldAsyncTask;
class IFieldAsyncTask;
class AKizokFieldPlayerBase;

UCLASS(Blueprintable)
class KIZOK_API UFieldWarpSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldWarpEvent OnStartWarpEventOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldWarpEvent OnStartWarpEventContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldWarpEvent OnCompleteStreamingEventOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldWarpEvent OnCompleteStreamingEventContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldWarpEvent OnSystemReadyEventOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldWarpEvent OnSystemReadyEventContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldWarpEvent OnEndWarpEventOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldWarpEvent OnEndWarpEventContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SystemPostWarpTasks;
    
public:
    UFieldWarpSystem();
    UFUNCTION(BlueprintCallable)
    void RemoveSystemInitializationTask(const TScriptInterface<IFieldAsyncTask> task);
    
    UFUNCTION(BlueprintCallable)
    void RemovePostWarpTask(const TScriptInterface<IFieldAsyncTask> task);
    
    UFUNCTION(BlueprintCallable)
    bool BeginWarp(AKizokFieldPlayerBase* refPlayer, const FVector& DstLocation, const FRotator& DstRotation, bool bResetCamera);
    
    UFUNCTION(BlueprintCallable)
    void AddSystemInitializationTask(const TScriptInterface<IFieldAsyncTask> task, const EFieldAsyncTaskListType listType);
    
    UFUNCTION(BlueprintCallable)
    void AddPostWarpTask(const TScriptInterface<IFieldAsyncTask> task, const EFieldAsyncTaskListType listType);
    
};

