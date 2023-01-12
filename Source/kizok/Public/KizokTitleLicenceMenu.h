#pragma once
#include "CoreMinimal.h"
#include "EKizokTitleLicenceType.h"
#include "KizokLicenceTextureData.h"
#include "KizokUserWidget.h"
#include "KizokTitleLicenceMenu.generated.h"

class UKizokButtonWidget;
class UImage;
class UScrollBox;
class UKizokTitleLicenceMenu;
class UCanvasPanel;
class UTexture2D;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokTitleLicenceMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> ButtonWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> ButtonWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TextureTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokLicenceTextureData> TextureDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> LicenceImageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LanguageSettingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LanguageSelectImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AgreeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DisagreeImage;
    
public:
    UKizokTitleLicenceMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void StartLanguageSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetLanguageSettingImage(UImage* InImage);
    
    UFUNCTION(BlueprintCallable)
    void SetLanguageSelectImage(UImage* InImage);
    
    UFUNCTION(BlueprintCallable)
    void SetDisagreeImage(UImage* InImage);
    
    UFUNCTION(BlueprintCallable)
    void SetAgreeImage(UImage* InImage);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLicenceScrollBox(UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLanguageButtonGroup(UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAgreeButtonGroup(UCanvasPanel* InCanvasPanel);
    
    UFUNCTION(BlueprintCallable)
    void ReflectLanguageTexture();
    
public:
    UFUNCTION(BlueprintCallable)
    UKizokTitleLicenceMenu* OpenTitleLicenceMenu(EKizokTitleLicenceType InLicenceType, int32 InLanguageSelectFocusIndex, bool bInPaused);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishLanguageSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLanguageSelectMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetLanguageSelectTexture(int32 InButtonIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishLanguageSelect();
    
};

