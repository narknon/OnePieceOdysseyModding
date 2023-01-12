#pragma once
#include "CoreMinimal.h"
#include "KizokLoadFaceIconInfo.h"
#include "UObject/Object.h"
#include "KizokFaceIconManager.generated.h"

class UTexture;
class UImage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class KIZOK_API UKizokFaceIconManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokLoadFaceIconInfo> LoadFaceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ErrorTexture;
    
public:
    UKizokFaceIconManager();
    UFUNCTION(BlueprintCallable)
    UTexture* GetFaceIconTexture(const FName InFaceId);
    
    UFUNCTION(BlueprintCallable)
    void AsyncFaceIconLoadToMaterial(const FName InFaceId, UMaterialInstanceDynamic* InMaterial, FName InParameterName, bool bInVisibleLoaded, UImage* InImage);
    
    UFUNCTION(BlueprintCallable)
    void AsyncFaceIconLoadToImage(const FName InFaceId, UImage* InImage, bool bInMatchSize, bool bInVisibleLoaded);
    
};

