#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokQuestInfoMoveType.h"
#include "KizokQuestInfoData.h"
#include "KizokUserWidget.h"
#include "KizokQuestInfoFrameWidget.generated.h"

class UVerticalBox;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokQuestInfoFrameWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SubQuestParamTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SubQuestTitleStringTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> SubQuestPurposeStringTableAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokUserWidget> QuestInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> ItemIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath EnemyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InSEQueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokUserWidget*> QuestInfoWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* QuestInfoWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* QuestInfoVerticalBox;
    
public:
    UKizokQuestInfoFrameWidget();
    UFUNCTION(BlueprintCallable)
    UKizokUserWidget* UpAllWaitQuestInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetQuestInfoVerticalBox(UVerticalBox* InVerticalBox);
    
    UFUNCTION(BlueprintCallable)
    void SetIsWait(bool bInIsWait);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectQuestInfoData(UKizokUserWidget* InQuestInfoWidget, const FKizokQuestInfoData& InQuestInfoData, UDataTable* InTitleDataTable, UDataTable* InPurposeDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectQuestInfoAnimaion(UKizokUserWidget* InQuestInfoWidget, EKizokQuestInfoMoveType InMoveType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateQuestInfoQueueAfter(UKizokUserWidget* InQuestInfoWidget, bool bInOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetItemIcon(uint8 InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetEnemyIcon() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateQuestInfoQueue();
    
    UFUNCTION(BlueprintCallable)
    void AddQuestInfoData(const FName& InQuestId);
    
};

