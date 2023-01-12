#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokCharacterSelectDispData.h"
#include "KizokUserWidget.h"
#include "KizokFieldPlayerChangeMenu.generated.h"

class UKizokButtonWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokFieldPlayerChangeMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaFaceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> UFrozenCharaFaceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaFlagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharaChangeVoiceList;
    
public:
    UKizokFieldPlayerChangeMenu();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLuffyJoinParty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializePlayerChange(UHorizontalBox* InHorizontalBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokButtonWidget* GetSelectedButtonWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaFlag(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaFace(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokCharacterSelectDispData GetCharacterDispData(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void CompletedTextureStreaming();
    
    UFUNCTION(BlueprintCallable)
    bool ChangePlayer(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void CallBackEndMenu();
    
    UFUNCTION(BlueprintCallable)
    void CallBackChangeChara();
    
};

