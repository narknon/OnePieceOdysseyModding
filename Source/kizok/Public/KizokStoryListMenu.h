#pragma once
#include "CoreMinimal.h"
#include "KizokStoryListMenuData.h"
#include "KizokStoryMenuPage.h"
#include "KizokStoryListMenu.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UScrollBox;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokStoryListMenu : public UKizokStoryMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> StoryButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StoryGuideStringTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StoryInfoStringTableAsset;
    
public:
    UKizokStoryListMenu();
    UFUNCTION(BlueprintCallable)
    void RegisterStoryButtonGroup(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable)
    void ReflectInfo(const TArray<FName>& InInfoIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectInfo(const FText& InInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetStoryInfoTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetStoryGuideTable() const;
    
public:
    UFUNCTION(BlueprintCallable)
    FKizokStoryListMenuData GetStoryData(int32 InIndex);
    
};

