#pragma once
#include "CoreMinimal.h"
#include "EKizokRegionTelopTextureType.h"
#include "KizokRegionTelopTexture.h"
#include "KizokUserWidget.h"
#include "KizokRegionTelopWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokRegionTelopWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokRegionTelopTexture> RegionTextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelopTime;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureList[2];
    
public:
    UKizokRegionTelopWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceTerminate();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTexture(EKizokRegionTelopTextureType InTextureType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRegionName() const;
    
};

