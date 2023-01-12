#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "KizokSettingMenuTab.h"
#include "KizokSettingMenuSoundTab.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuSoundTab : public UKizokSettingMenuTab {
    GENERATED_BODY()
public:
    UKizokSettingMenuSoundTab();
    UFUNCTION(BlueprintCallable)
    void SetVoiceId(const FName& InVoiceId);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterSoundSettingFromVerticalBox(const UVerticalBox* InVerticalBox, const uint8 inTextIndexHead);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
    
};

