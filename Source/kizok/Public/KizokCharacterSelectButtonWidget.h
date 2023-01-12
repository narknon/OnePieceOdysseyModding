#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASP_ATTRIBUTE.h"
#include "KizokButtonWidget.h"
#include "KizokCharacterSelectButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCharacterSelectButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASP_ATTRIBUTE, FSoftObjectPath> AttributeIconList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocus;
    
public:
    UKizokCharacterSelectButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckDying(bool bInFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAttributeIconPath(ASP_ATTRIBUTE Attribute) const;
    
};

