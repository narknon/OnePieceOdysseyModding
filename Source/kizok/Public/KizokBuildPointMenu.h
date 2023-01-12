#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokBuildPointMenuMaterialItemData.h"
#include "KizokUserWidget.h"
#include "KizokBuildPointMenu.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBuildPointMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> MaterialItemIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MessageTextIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChoiceTextIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BridgeTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HammerSECueName;
    
public:
    UKizokBuildPointMenu();
    UFUNCTION(BlueprintCallable)
    void SetBridgeId(FName InBridgeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMessageText(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokBuildPointMenuMaterialItemData GetMaterialItemData(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetMaterialIcon(uint8 InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetChoiceText(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharaName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBuildBridgeChoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BuildEnable() const;
    
    UFUNCTION(BlueprintCallable)
    void BuildChoice(int32 InChoiceNo);
    
};

