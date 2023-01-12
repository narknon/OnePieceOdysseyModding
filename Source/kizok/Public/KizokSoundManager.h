#pragma once
#include "CoreMinimal.h"
#include "KizokCategoryVolume.h"
#include "UObject/Object.h"
#include "KizokSoundManager.generated.h"

class UAtomComponent;
class UKizokSoundWeather;

UCLASS(Blueprintable)
class KIZOK_API UKizokSoundManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> AtomComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokCategoryVolume> CategoryFadeVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> CategoryVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSoundWeather* m_WeatherManager;
    
public:
    UKizokSoundManager();
private:
    UFUNCTION(BlueprintCallable)
    void FadeVolumeByCategory();
    
};

