#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "WidgetDebugCommonDataSet.h"
#include "EWidgetDebugExecType.h"
#include "MotViewerWeaponInfo.h"
#include "UObject/Object.h"
#include "KizokMotionViewer.generated.h"

class AActor;
class APawn;
class UKizokDebuggerMainWidget;
class AKizokWeaponActor;

UCLASS(Blueprintable)
class KIZOK_API UKizokMotionViewer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> characterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HiddenCharaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, int32> AnimMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* NowChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* InGameChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKizokWeaponActor*> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMotViewerWeaponInfo> WeaponList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebuggerMainWidget* m_debuggerWidget;
    
public:
    UKizokMotionViewer();
private:
    UFUNCTION(BlueprintCallable)
    bool OnRequestDebugData(FWidgetDebugCommonDataSet& dataset);
    
    UFUNCTION(BlueprintCallable)
    void OnClickDebugButton(EWidgetDebugExecType execType, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDebugData(FWidgetDebugCommonDataSet& dataset);
    
};

