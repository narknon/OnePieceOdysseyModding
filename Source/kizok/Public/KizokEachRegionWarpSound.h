#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokEachRegionWarpSound.generated.h"

class USoundAtomCueSheet;
class UKizokEachRegionWarpSound;
class UKizokSEComponent;

UCLASS(Blueprintable)
class KIZOK_API UKizokEachRegionWarpSound : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<USoundAtomCueSheet>> EachRegionWarpMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSEComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UKizokEachRegionWarpSound*> DLCWarpSoundList;
    
public:
    UKizokEachRegionWarpSound();
    UFUNCTION(BlueprintCallable)
    int32 PlaySound(FName CueName);
    
    UFUNCTION(BlueprintCallable)
    void LoadSoundCueSheet(FName InRegionId);
    
};

