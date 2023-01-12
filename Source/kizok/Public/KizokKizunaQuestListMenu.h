#pragma once
#include "CoreMinimal.h"
#include "KizokKizunaQuestPosterData.h"
#include "KizokKizunaQuestListMenuData.h"
#include "KizokStoryMenuPage.h"
#include "KizokKizunaQuestListMenu.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokQuestStartResultMenuBase;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokKizunaQuestListMenu : public UKizokStoryMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> KizunaQuestButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecretTextId;
    
public:
    UKizokKizunaQuestListMenu();
    UFUNCTION(BlueprintCallable)
    void SortKizunaQuestList();
    
    UFUNCTION(BlueprintCallable)
    void InitKizunaQuestListMenu(UKizokQuestStartResultMenuBase* InQuestWidget, UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSecretText() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokKizunaQuestPosterData GetKizunaQuestPosterData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    FKizokKizunaQuestListMenuData GetKizunaQuestData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DisableKizunaQuestDataNotice(int32 InIndex);
    
};

