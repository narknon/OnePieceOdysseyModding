#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageTableType.h"
#include "KizokSoundDataTable.h"
#include "UObject/Object.h"
#include "KizokEachRegionSoundControl.generated.h"

class UAtomCueSheetLoaderComponent;
class UKizokEachRegionSoundControl;
class UKizokSEComponent;

UCLASS(Blueprintable)
class KIZOK_API UKizokEachRegionSoundControl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokSoundDataTable> EachRegionSoundMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UKizokSEComponent*> SoundComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtomCueSheetLoaderComponent*> SoundLoaderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UKizokEachRegionSoundControl*> DLCRegionSoundList;
    
public:
    UKizokEachRegionSoundControl();
    UFUNCTION(BlueprintCallable)
    int32 PlayMessageVoice(EKizokMessageTableType Type, FName VoiceID);
    
    UFUNCTION(BlueprintCallable)
    void LoadSoundCueSheet(FName InRegionId);
    
};

