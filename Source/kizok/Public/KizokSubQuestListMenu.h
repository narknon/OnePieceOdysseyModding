#pragma once
#include "CoreMinimal.h"
#include "KizokSubQuestPosterData.h"
#include "KizokSubQuestListMenuData.h"
#include "KizokStoryMenuPage.h"
#include "KizokSubQuestListMenu.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokQuestStartResultMenuBase;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSubQuestListMenu : public UKizokStoryMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> SubQuestButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecretTextId;
    
public:
    UKizokSubQuestListMenu();
    UFUNCTION(BlueprintCallable)
    void SortSubQuestList();
    
    UFUNCTION(BlueprintCallable)
    void InitSubQuestListMenu(UKizokQuestStartResultMenuBase* InQuestWidget, UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable)
    FKizokSubQuestPosterData GetSubQuestPosterData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    FKizokSubQuestListMenuData GetSubQuestData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSecretText() const;
    
    UFUNCTION(BlueprintCallable)
    bool DisableSubQuestDataNotice(int32 InIndex);
    
};

