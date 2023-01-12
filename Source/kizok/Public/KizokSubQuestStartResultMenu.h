#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokSubQuestPosterData.h"
#include "KizokSubQuestStartResultMenuData.h"
#include "KizokQuestStartResultMenuBase.h"
#include "KizokSubQuestStartResultMenu.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSubQuestStartResultMenu : public UKizokQuestStartResultMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> ItemIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AccessoryIcon;
    
public:
    UKizokSubQuestStartResultMenu();
    UFUNCTION(BlueprintCallable)
    FKizokSubQuestPosterData GetSubQuestPosterData();
    
    UFUNCTION(BlueprintCallable)
    FKizokSubQuestStartResultMenuData GetSubQuestData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestTitleTextTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestPurposeTextTable(int32 InQuestSeq) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestInfoTextTable(int32 InQuestSeq) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestClientTextTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetItemIcon(uint8 InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAccessoryIcon() const;
    
};

