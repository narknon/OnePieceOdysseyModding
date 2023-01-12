#pragma once
#include "CoreMinimal.h"
#include "KizokOnFinishedScrollEndCreditsDelegate.h"
#include "KizokOnStartedScrollEndCreditsDelegate.h"
#include "KizokUserWidget.h"
#include "KizokEndCreditsWidget.generated.h"

class UImage;
class UScrollBox;
class UKizokEndCreditsTextWidget;
class UKizokEndCreditsStaffNametWidget;
class UTexture2D;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokEndCreditsWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreTextureDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostTextureDelayTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreBgmDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiddleBgmDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostBgmDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaffrollTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaffrollImageTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaffrollBGMTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokEndCreditsTextWidget*> UnusedBlankLineWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokEndCreditsTextWidget*> UnusedTextWidgetNormalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokEndCreditsTextWidget*> UnusedTextWidgetBigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> UnusedLogoImageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokEndCreditsStaffNametWidget*> UnusedStaffNameWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TextureList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnStartedScrollEndCredits OnStartedScrollCredits;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnFinishedScrollEndCredits OnFinishedScrollCredits;
    
    UKizokEndCreditsWidget();
private:
    UFUNCTION(BlueprintCallable)
    void WaitBgm();
    
    UFUNCTION(BlueprintCallable)
    void StartScroll();
    
    UFUNCTION(BlueprintCallable)
    void StartBgmManagement();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCreditsListScrollBox(UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void PlayBgm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTextureChangeTime() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetNextTexture();
    
};

