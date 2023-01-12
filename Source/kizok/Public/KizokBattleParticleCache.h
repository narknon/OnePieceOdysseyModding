#pragma once
#include "CoreMinimal.h"
#include "OnAsyncLoadCompleteDelegate.h"
#include "UObject/Object.h"
#include "KizokBattleParticleCache.generated.h"

class UKizokAsyncLoaderEx;

UCLASS(Blueprintable)
class UKizokBattleParticleCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokAsyncLoaderEx* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ObjRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoadComplete OnCompletedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsComplete;
    
public:
    UKizokBattleParticleCache();
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleted();
    
};

