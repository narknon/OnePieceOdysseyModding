#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBtlMenuDirectAnim.h"
#include "ASP_ATTRIBUTE.h"
#include "BtlMenuGroup.h"
#include "BtlCharaIcon.h"
#include "UObject/NoExportTypes.h"
#include "KizokCmdButtonWidget.h"
#include "KizokBattleMenuFieldIcon.generated.h"

class UKizokBattleMenuBase;
class UKizokMenuBattleGroupIcon;
class UKizokMenuBattleMain;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBattleMenuFieldIcon : public UKizokCmdButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokBattleMenuBase> TargetCursorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASP_ATTRIBUTE, FSoftObjectPath> AttributeIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuGroup GroupInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirectPlayingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuDirectAnim CurDirectionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleMenuBase* TargetCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTargetCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispAttributeIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleMain* m_MenuBtlMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlCharaIcon m_CharaIconInfo;
    
public:
    UKizokBattleMenuFieldIcon();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispTargetCursor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopCharaIconAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetZOrder(int32 Order);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextColor(bool bStrong);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetCursorPos(FVector2D InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupIcon(UKizokMenuBattleGroupIcon* Widget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorDisp(bool disp);
    
    UFUNCTION(BlueprintCallable)
    void ResistWeakTutorial();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveTargetCursor(UKizokBattleMenuBase* InTargetCursor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveAsyncLoadInfoTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectRingLamp(int32 TurnOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDirectAnim(EBtlMenuDirectAnim AnimType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatePosition(FVector2D Pos);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NormalAnimIcon();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleWeakMark() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleResistMark() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInAnimationPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyPlayngDirectAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitTargetCursor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetWidgetSize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetOffsetSizeFromArrowPos();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroupID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharaName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FBtlCharaIcon GetCharaIconParam();
    
    UFUNCTION(BlueprintCallable)
    float GetCharaHpRate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAttributeIconPath(ASP_ATTRIBUTE Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusAnimIcon();
    
    UFUNCTION(BlueprintCallable)
    void FinishedDirectAnimNotify();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddTargetCursor(UKizokBattleMenuBase* InTargetCursor);
    
};

