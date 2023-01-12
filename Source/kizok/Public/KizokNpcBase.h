#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ENpcCategory.h"
#include "GimmickTalkEndDelegate.h"
#include "GimmickTalkNextDelegate.h"
#include "EndTalkDelegateDelegate.h"
#include "BeginTalkDelegateDelegate.h"
#include "KizokNpcTalkEventParam.h"
#include "KizokAttachWeaponParam.h"
#include "UObject/NoExportTypes.h"
#include "KizokNonPlayerCharaBase.h"
#include "KizokNpcBase.generated.h"

class UPrimitiveComponent;
class AActor;
class USplineComponent;
class USphereComponent;
class AKizokGimmickNPCMoveMarker;
class ANPCMoveMarkerInfo;
class UTexture2D;

UCLASS(Blueprintable)
class KIZOK_API AKizokNpcBase : public AKizokNonPlayerCharaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pInteractAreaVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pShowIconAreaVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLookAtPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokNpcTalkEventParam m_TalkEventParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSlipThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlipThroughEnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TalkMotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcCategory NpcCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokAttachWeaponParam> AttachWeapons;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginTalkDelegate OnBeginTalkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndTalkDelegate OnEndTalkDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebornTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickTalkNext OnTalkNext;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickTalkEnd OnGimmickTalkEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CursorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InteractTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokGimmickNPCMoveMarker* Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPCMoveMarkerInfo* TargetMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
public:
    AKizokNpcBase();
    UFUNCTION(BlueprintCallable)
    void TalkInputCheck();
    
    UFUNCTION(BlueprintCallable)
    void Talk(const FString& TalkID);
    
    UFUNCTION(BlueprintCallable)
    void SetUpperFacialID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkMotion(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkLoopMotion(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetLowerFacialID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtTag(const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetLookatRot(float Yaw, float Pitch, float Roll);
    
    UFUNCTION(BlueprintCallable)
    void SetFacialID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void ResetTalkMotion();
    
    UFUNCTION(BlueprintCallable)
    void ResetLookAt();
    
    UFUNCTION(BlueprintCallable)
    void ResetFacial();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEndShowIconArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEndInteractArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBeginShowIconArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBeginInteractArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMessageChoiceID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKizokAttachWeaponParam> GetAttachWeapons();
    
};

