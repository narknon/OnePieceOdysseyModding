#pragma once
#include "CoreMinimal.h"
#include "EKizokPictureBookState.h"
#include "EKizokPictureBookType.h"
#include "KizokCharaBookData.h"
#include "KizokEnemyBookData.h"
#include "KizokUserWidget.h"
#include "KizokPictureBookMenu.generated.h"

class AActor;
class UKizokButtonWidget;
class AKizokCaptureRoom;
class UScrollBox;
class UTextureRenderTarget2D;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokPictureBookMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> ButtonWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> ButtonWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TextIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilityTypeTextIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokCaptureRoom* CaptureRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotatingVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RefractionEnabledList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DescScrollLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharaParamTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharaStringTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyParamTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyStringTableAsset;
    
public:
    UKizokPictureBookMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void SetItemButtonGroupIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyListButtonGroupIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDescScrollAndPlayVoiceEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraOperationEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonWidgetPadding(UKizokButtonWidget* InButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetBookButtonGroupIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScrollInfoFromItemDesc(EKizokPictureBookType InType);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharaVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplaceRenderTarget(bool bInUpperPage, bool bInColorTexture, UTextureRenderTarget2D* InRenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefrectDisplayFromState(EKizokPictureBookState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectEnemyData(const FKizokEnemyBookData& InEnemyData, bool bInUpperPage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectCharaData(const FKizokCharaBookData& InCharaData, bool bInUpperPage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenPage(int32 InSelectBook);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenBook(int32 InSelectBook);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitBP(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosePage(int32 InSelectBook);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseBook(int32 InSelectBook);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePage(int32 InSelectBook, bool bInNext, bool bInModelHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppearModel(int32 InSelectBook, bool bInNext);
    
    UFUNCTION(BlueprintCallable)
    void LoadModel(bool bInNext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoicePlayable() const;
    
    UFUNCTION(BlueprintCallable)
    void InitDescScrollInfo(UScrollBox* InScrollBox, float InScrollInsideSize);
    
    UFUNCTION(BlueprintCallable)
    bool HiddenNoticeIcon(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    FKizokEnemyBookData GetEnemyData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokPictureBookType GetCurrentBookType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCompleteLoadModel() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokCharaBookData GetCharaData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void CompletedModelSpawn();
    
    UFUNCTION(BlueprintCallable)
    void CompletedModelLoading();
    
    UFUNCTION(BlueprintCallable)
    void CompletedCharaVoiceLoading(uint8 InCharaVoiceIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddItemScrollBoxList(UScrollBox* InScrollBox);
    
};

