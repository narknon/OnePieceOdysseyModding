#pragma once
#include "CoreMinimal.h"
#include "KizokGroupTalkButtonByNextDelegateDelegate.h"
#include "KizokGroupTalkOtherDelegateDelegate.h"
#include "KizokGroupTalkCompletedDelegateDelegate.h"
#include "UObject/Object.h"
#include "KizokGroupTalkOperator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokGroupTalkOperator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageGroupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageGroupActionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GroupTalkTable;
    
public:
    UKizokGroupTalkOperator();
    UFUNCTION(BlueprintCallable)
    static void SkipGroupTalk();
    
    UFUNCTION(BlueprintCallable)
    static void PlayGroupTalkByGroupTalkSheetName(FName InGroupTalkSheetName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPageFeedDuringWaitTime(int32 ChoiceNo);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageEndPage(int32 ChoiceNo);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageClose();
    
    UFUNCTION(BlueprintCallable)
    void OnGroupTalkOtherEvent(const FName& Command, const FName& Params);
    
    UFUNCTION(BlueprintCallable)
    void OnGroupTalkCompletedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnGroupTalkButtonByNextEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnCameWaitTime();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayGroupTalk();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SkipGroupTalk();
    
    UFUNCTION(BlueprintCallable)
    static void ClearGroupTalkEvent();
    
    UFUNCTION(BlueprintCallable)
    static void AddGroupTalkOtherEvent(FKizokGroupTalkOtherDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void AddGroupTalkCompletedEvent(FKizokGroupTalkCompletedDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void AddGroupTalkButtonByNextEvent(FKizokGroupTalkButtonByNextDelegate InEvent);
    
};

