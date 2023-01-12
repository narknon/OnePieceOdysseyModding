#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokTitleStartupMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokTitleStartupMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HandsupLanguageIdList;
    
public:
    UKizokTitleStartupMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void Skip();
    
    UFUNCTION(BlueprintCallable)
    void SetNoticeScreenSkipFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetIsSkipEnable(bool bInIsSkipEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartupFromHeadsup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoticeScreenSkipFlag() const;
    
};

