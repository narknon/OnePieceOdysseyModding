#pragma once
#include "CoreMinimal.h"
#include "OnAsyncLoadCompleteDelegate.h"
#include "UObject/Object.h"
#include "KizokBtlMsgTblsCache.generated.h"

class AKizokNewBattleMode;
class UKizokAsyncLoaderEx;

UCLASS(Blueprintable)
class UKizokBtlMsgTblsCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokNewBattleMode* BattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokAsyncLoaderEx* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ObjRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoadComplete OnCompletedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsComplete;
    
public:
    UKizokBtlMsgTblsCache();
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleted();
    
};

