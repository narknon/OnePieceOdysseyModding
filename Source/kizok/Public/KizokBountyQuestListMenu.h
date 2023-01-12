#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokBountyQuestListMenuData.h"
#include "KizokStoryMenuPage.h"
#include "KizokBountyQuestListMenu.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokQuestStartResultMenuBase;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBountyQuestListMenu : public UKizokStoryMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> BountyQuestButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecretTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecretNumberTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SecretWantedPicture;
    
public:
    UKizokBountyQuestListMenu();
    UFUNCTION(BlueprintCallable)
    void SortBountyQuestList();
    
    UFUNCTION(BlueprintCallable)
    void InitBountyQuestListMenu(UKizokQuestStartResultMenuBase* InQuestWidget, UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSecretNumberText() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokBountyQuestListMenuData GetBountyQuestData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DisableBountyQuestDataNotice(int32 InIndex);
    
};

