#pragma once
#include "CoreMinimal.h"
#include "ESkillListDispType.h"
#include "KizokDispSkillList.h"
#include "KizokButtonWidget.h"
#include "KizokSkillButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSkillButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokDispSkillList DispInfo;
    
public:
    UKizokSkillButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispListAnim();
    
    UFUNCTION(BlueprintCallable)
    ESkillListDispType GetDispType();
    
    UFUNCTION(BlueprintCallable)
    FKizokDispSkillList GetDispInfo();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusLostAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusAnimation();
    
};

