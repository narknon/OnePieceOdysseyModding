#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokKizunaQuestStartResultMenuData.h"
#include "KizokKizunaQuestPosterData.h"
#include "KizokQuestStartResultMenuBase.h"
#include "KizokKizunaQuestStartResultMenu.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokKizunaQuestStartResultMenu : public UKizokQuestStartResultMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> ItemIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AccessoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecretTextId;
    
public:
    UKizokKizunaQuestStartResultMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSecretText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestTitleTextTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestPurposeTextTable(int32 InQuestSeq) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestInfoTextTable(int32 InQuestSeq) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestClientTextTable() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokKizunaQuestPosterData GetKizunaQuestPosterData();
    
    UFUNCTION(BlueprintCallable)
    FKizokKizunaQuestStartResultMenuData GetKizunaQuestData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetItemIcon(uint8 InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaIcon(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAccessoryIcon() const;
    
};

