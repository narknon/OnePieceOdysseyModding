#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "KizokSkillUpMenuSkillData.h"
#include "KizokButtonWidget.h"
#include "KizokSkillUpButtonWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSkillUpButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SelfIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CharaIndex;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* AnimationWidgets[8];
    
public:
    UKizokSkillUpButtonWidget();
    UFUNCTION(BlueprintCallable)
    void ResetCubeIcon(int32 forceCubeIndex, bool forceActive);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAnimationWidget(UUserWidget* Widget, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpadteCubeButtonGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonCreate(const FKizokSkillUpMenuSkillData& skillData, PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSelfIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCharaIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetButtonGroupIndex() const;
    
};

