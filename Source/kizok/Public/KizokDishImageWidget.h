#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokDishTextureInfo.h"
#include "KizokUserWidget.h"
#include "KizokDishImageWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokDishImageWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokDishTextureInfo> DishList;
    
public:
    UKizokDishImageWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleDishEffect(FName InItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDishImage(FName InItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistDish(FName InItemId) const;
    
};

