#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlMenuStatusEffectParam.h"
#include "KizokButtonWidget.h"
#include "KizokBattleStatusIconButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBattleStatusIconButton : public UKizokButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuStatusEffectParam IconParam;
    
public:
    UKizokBattleStatusIconButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconParam(const FBtlMenuStatusEffectParam& Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIconParam(const FBtlMenuStatusEffectParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectIcon();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidSoftObjectPath(const FSoftObjectPath& Path);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CollapsedIcon();
    
};

