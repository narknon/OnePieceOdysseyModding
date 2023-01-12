#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBtlMenuEncountType.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleEncount.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleEncount : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlMenuEncountType, FSoftObjectPath> FlagTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsyncLoadTextureIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingEncount;
    
    UKizokMenuBattleEncount();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayWidgetAnim(UWidgetAnimation* Anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishedAnimationNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadFlagTexture(FSoftObjectPath Path);
    
};

