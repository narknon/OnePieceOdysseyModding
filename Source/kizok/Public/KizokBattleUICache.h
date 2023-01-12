#pragma once
#include "CoreMinimal.h"
#include "OnAsyncLoadCompleteDelegate.h"
#include "UObject/Object.h"
#include "KizokBattleUICache.generated.h"

class AKizokNewBattleMode;
class UKizokAsyncLoaderEx;

UCLASS(Blueprintable)
class UKizokBattleUICache : public UObject {
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
    UKizokBattleUICache();
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleted();
    
};

