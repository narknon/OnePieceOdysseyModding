#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokUserWidget.h"
#include "KizokAccessoryImageWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAccessoryImageWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> NormalCubeTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> NamedCubeTextureList;
    
public:
    UKizokAccessoryImageWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAccessoryImage(FName InAccessoryId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAccessoryCubeImage(uint8 InShapeId, bool IsNamed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistAccessory(FName InAccessoryId) const;
    
};

