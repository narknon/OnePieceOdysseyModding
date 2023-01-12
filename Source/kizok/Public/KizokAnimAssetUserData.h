#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "KizokAnimAssetUserData.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAnimAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAnimationAsset*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreAnimationPath;
    
public:
    UKizokAnimAssetUserData();
    UFUNCTION(BlueprintCallable)
    UAnimationAsset* GetAnimation(const FName& Name);
    
};

