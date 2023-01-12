#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokQuestStartResultMenuBase.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokQuestStartResultMenuBase : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> QuestTextTableAssetList;
    
public:
    UKizokQuestStartResultMenuBase();
    UFUNCTION(BlueprintCallable)
    void SetParentWidget(UKizokUserWidget* InParentWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStart() const;
    
    UFUNCTION(BlueprintCallable)
    void InitQuest(const FName& InQuestId, bool InIsStart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokUserWidget* GetParentWidget() const;
    
};

