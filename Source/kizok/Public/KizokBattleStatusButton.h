#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EBtlMenuDirectAnim.h"
#include "EBtlMenuStatusIconType.h"
#include "EKizokCharaIconType.h"
#include "EBtlStatusMenuIconAnim.h"
#include "EBtlStatusMenuGauge.h"
#include "ASP_ATTRIBUTE.h"
#include "BtlMenuStatus.h"
#include "KizokButtonWidget.h"
#include "KizokBattleStatusButton.generated.h"

class UImage;
class UKizokBattleStatusButton;
class UKizokMenuBattleGroupOrder;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBattleStatusButton : public UKizokButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReflectColorByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaterialGaugeBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOffsetMaterialBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOffsetMaterialBarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HpMaterialOffsetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpMaterialOffsetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpGaugeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASP_ATTRIBUTE, FSoftObjectPath> AttributeIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PLAYER_ID DebugPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCheckHpBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCheckSpBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugCurValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugMaxValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconDispMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingMoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingSPRecoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SpGaugeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SpGaugeEffImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuStatus CharaParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoveAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBattleStatusButton* MoveTargetWBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleGroupOrder* BtlGroupWidget;
    
public:
    UKizokBattleStatusButton();
    UFUNCTION(BlueprintCallable)
    void UpdateStatusChangeList(int32 DispNum, const TArray<FSoftObjectPath>& List);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStatusChangeIcon(int32 Index, bool bVisible, const FSoftObjectPath& TexturePath);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSPRecover(int32 last, int32 Now, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerFace(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconAnim(EBtlStatusMenuIconAnim AnimType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGauge(EBtlStatusMenuGauge GaugeType, int32 CurNum, int32 MaxNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFace(const FSoftObjectPath& TexturePath);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatusSPDiffernce(const FBtlMenuStatus& Param, int32 CostSP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatus(const FBtlMenuStatus& Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateColorByPlayerId(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectDebugParam();
    
    UFUNCTION(BlueprintCallable)
    void PlaySPRecoverAnim(UImage* gauge, UImage* eff, int32 last, int32 Now, int32 Max);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayGroupMoveAnimByStatusWBP(UKizokBattleStatusButton* StatusWBP, UCurveFloat* Curve);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGroupChangeAnim();
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetStatusIconPath(EBtlMenuStatusIconType StatusType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSoftObjectPath> GetStatusChangePathList(const TArray<EBtlMenuStatusIconType>& StatusList);
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetCharaIconPath(PLAYER_ID playerID, EKizokCharaIconType IconType);
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetCharaFacePath(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAttributeIconPath(ASP_ATTRIBUTE Attribute) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusLostAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DirectionAnimEndNotify(EBtlMenuDirectAnim AnimType);
    
    UFUNCTION(BlueprintCallable)
    float CalcMaterialOffsetValue(int32 CurValue, int32 MaxValue);
    
};

