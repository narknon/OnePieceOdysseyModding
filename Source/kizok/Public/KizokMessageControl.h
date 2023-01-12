#pragma once
#include "CoreMinimal.h"
#include "KizokOnDestroyWidgetDelegateDelegate.h"
#include "KizokTalkWindowAfterSelectDelegateDelegate.h"
#include "KizokMessageControlOtherParamDelegateDelegate.h"
#include "KizokMessageControlEndPageDelegateDelegate.h"
#include "KizokMessageControlBeginPageDelegateDelegate.h"
#include "KizokTalkWindowAfterCloseDelegateDelegate.h"
#include "KizokTalkWindowBeforeOpenDelegateDelegate.h"
#include "KizokMessageGroupActionTableRow.h"
#include "UObject/Object.h"
#include "KizokMessageControl.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokMessageControl : public UObject {
    GENERATED_BODY()
public:
    UKizokMessageControl();
    UFUNCTION(BlueprintCallable)
    static void StopTalkOnTheWay();
    
    UFUNCTION(BlueprintCallable)
    static void ResumeTalkOnTheWay();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveMessageAfterSelectEvent(FKizokTalkWindowAfterSelectDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void PlayTalkOnTheWayByMessageId(FName InMessageId);
    
    UFUNCTION(BlueprintCallable)
    static void PlayScenarioBattleTalk(FName InMessageId);
    
    UFUNCTION(BlueprintCallable)
    static void PlayMessageWithChoiceByString(FText InMessage, const TArray<FText>& InChoiceList);
    
    UFUNCTION(BlueprintCallable)
    static void PlayMessageByMessageId(FName InMessageId);
    
    UFUNCTION(BlueprintCallable)
    static void PlayGroupMessageByMessageId(FName InMessageId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayNextMessageEvent(int32 ChoiceNo);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageGetOtherParamEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnMessageEndPageEvent(int32 ChoiceNo);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageBeginPageEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShowTalkOnTheWay();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingMessage();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMessageChoiceNo();
    
    UFUNCTION(BlueprintCallable)
    static FKizokMessageGroupActionTableRow GetGroupMessageActionTableRow();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMessagePageEvent();
    
    UFUNCTION(BlueprintCallable)
    static void AddMessageOtherParamEvent(FKizokMessageControlOtherParamDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessageEndPageEvent(FKizokMessageControlEndPageDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessageDestroyEvent(FKizokOnDestroyWidgetDelegate InEvent, bool bInReserve);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessageBeginPageEvent(FKizokMessageControlBeginPageDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessageBeforeOpenEvent(FKizokTalkWindowBeforeOpenDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessageAfterSelectEvent(FKizokTalkWindowAfterSelectDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessageAfterCloseEvent(FKizokTalkWindowAfterCloseDelegate InEvent);
    
};

