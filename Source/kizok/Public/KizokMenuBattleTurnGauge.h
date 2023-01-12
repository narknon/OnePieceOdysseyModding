#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBtlMenuDirectAnim.h"
#include "BtlMenuGroup.h"
#include "BtlCharaIcon.h"
#include "UObject/NoExportTypes.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleTurnGauge.generated.h"

class UKizokMenuBattleCharaIcon;
class UHorizontalBox;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleTurnGauge : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerGaugeHighPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Group1GaugeHighPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Group2GaugeHighPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Group3GaugeHighPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Group4GaugeHighPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitGaugeWidePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeMoveLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDispIconNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokMenuBattleCharaIcon> CharaIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GroupMoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCmdOperateChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuDirectAnim CurDierctAnimType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokMenuBattleCharaIcon*> IconDirectionAnimList;
    
public:
    UKizokMenuBattleTurnGauge();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTurnList(const TArray<FBtlCharaIcon>& TurnList, bool bUseTopIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCharaIcon(const FBtlCharaIcon& Param, int32 TurnOrder, bool bUseTopIcon);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveDirectAnimEndIcon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTurnGaugePackQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTurnChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCharaDeadAnim(const TArray<FBtlMenuGroup>& List);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsExistDirectAnimList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetQueueListNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetMoveSizeFromTopIcon();
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetCurPlayerIconPath();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurPlayerGroupId();
    
    UFUNCTION(BlueprintCallable)
    void DirectionAnimEndNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DequeueIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeleteQueue(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void CreateCharaIcon(int32 CreateNum, UHorizontalBox* Box);
    
    UFUNCTION(BlueprintCallable)
    void ClearDierctionIconList();
    
    UFUNCTION(BlueprintCallable)
    void BindEndDirectionAnimNotify(UKizokMenuBattleCharaIcon* Icon);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectionAnimIconList(UKizokMenuBattleCharaIcon* Icon);
    
};

