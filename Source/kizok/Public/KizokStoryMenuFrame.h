#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokMainMenuPage.h"
#include "KizokStoryMenuFrame.generated.h"

class UKizokQuestStartResultMenuBase;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokStoryMenuFrame : public UKizokMainMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AreaOrderTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> TabIconList;
    
public:
    UKizokStoryMenuFrame();
    UFUNCTION(BlueprintCallable)
    void InitStoryMenuFrame(TArray<UKizokQuestStartResultMenuBase*> InQuestWidgetList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUpdateIconDispFlgList(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetTabIcon(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMenuReleaseFlg(int32 InIndex) const;
    
};

