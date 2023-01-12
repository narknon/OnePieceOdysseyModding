#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "EBtlMenuDirectAnim.h"
#include "BtlMenuGroupPos.h"
#include "BtlMenuGroupMoveParam.h"
#include "BtlMenuGroup.h"
#include "BtlPowerMapDirectAnim.h"
#include "BtlCharaIcon.h"
#include "UObject/NoExportTypes.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattlePowerMap.generated.h"

class UKizokMenuBattleCharaIcon;
class UCanvasPanel;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattlePowerMap : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokMenuBattleCharaIcon> IconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupMoveAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GroupMoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* TestCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuDirectAnim CurDierctAnimType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlPowerMapDirectAnim> IconList;
    
public:
    UKizokMenuBattlePowerMap();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePosGroupMoveIcon(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCharaIcon(const FBtlCharaIcon& Param, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopKickOutWaitStateAll(const TArray<FBtlMenuGroupPos>& List);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopKickOutWaitState(const FBtlMenuGroupPos& Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPosGroupMoveIcon(int32 Index, FVector2D Pos);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectIconAngleToFoward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayKickOutWaitState(const TArray<FBtlMenuGroupPos>& List);
    
    UFUNCTION(BlueprintCallable)
    void PlayKickOutAnim(const TArray<FBtlMenuGroupMoveParam>& List);
    
    UFUNCTION(BlueprintCallable)
    void PlayGroupMoveAnim(const FBtlMenuGroupPos& CurParam, const FBtlMenuGroupPos& NextParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFocusIcon(int32 GroupID, int32 Order, bool bPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCharaDeadAnim(const TArray<FBtlMenuGroup>& List);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharaChangeAnim(const FBtlMenuGroupPos& Param, PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAttackTargetAnim(const TArray<FBtlMenuGroupPos>& List);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OffsetPosGroupMoveIcon(int32 Index, float Angle, FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistDirectAnimList();
    
    UFUNCTION(BlueprintCallable)
    void InitRegisterIconNotify();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitGroupColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HiddenCharaIconAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HiddenCharaIcon(const FBtlMenuGroupPos& Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetIconLocalPos(const FBtlMenuGroupPos& PosParam);
    
    UFUNCTION(BlueprintCallable)
    FBtlMenuGroupPos GetGroupMovePosParam(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetCharaIconParam(const FBtlMenuGroupPos& InPosParam, FBtlCharaIcon& OutIconParam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UKizokMenuBattleCharaIcon* GetCharaIcon(int32 GroupID, int32 Order, bool bPlayer);
    
    UFUNCTION(BlueprintCallable)
    void EndKickOutAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DuplicateCharaIcon(const FBtlMenuGroupPos& CurPosParam, const FBtlMenuGroupPos& NextPosParam);
    
    UFUNCTION(BlueprintCallable)
    void DeleteIconListFromWidget(UKizokMenuBattleCharaIcon* Icon);
    
    UFUNCTION(BlueprintCallable)
    void DeleteIconList(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    FVector2D ConvertVectorFromAngle(float Angle, FVector2D Vec);
    
    UFUNCTION(BlueprintCallable)
    void ClearDierctionIconList();
    
    UFUNCTION(BlueprintCallable)
    void CallDirectAnimEndNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D CalcIconMoveLength(const FBtlMenuGroupPos& CurParam, const FBtlMenuGroupPos& NextParam);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectionAnimIconList(UKizokMenuBattleCharaIcon* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddChildGroupMoveIcon(UKizokMenuBattleCharaIcon* Icon);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAnimIconList(FBtlPowerMapDirectAnim& Param);
    
};

