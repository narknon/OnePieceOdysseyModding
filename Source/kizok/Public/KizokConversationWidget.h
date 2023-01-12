#pragma once
#include "CoreMinimal.h"
#include "EKizokConversationMessageMode.h"
#include "KizokOnDisplayMessageEventDelegate.h"
#include "KizokOnSkipMessageEventDelegate.h"
#include "KizokOnFinishMessageTimeEventDelegate.h"
#include "KizokOnAllDeleteMessageEventDelegate.h"
#include "KizokUserWidget.h"
#include "KizokConversationWidget.generated.h"

class UObject;
class UKizokButtonWidget;
class UKizokConversationWidget;
class UScrollBox;
class UCurveFloat;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokConversationWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnAllDeleteMessageEvent AllDeleteMessageEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> MessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MessageDeleteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetSpaceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SimultaneousMaximumDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScrollCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> WidgetChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageTable;
    
public:
    UKizokConversationWidget();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindSkipMessageEvent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindDisplayMessageEvent(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsAllDeleteMessage(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConversationWidgetData(UKizokButtonWidget* InWidget, const FName& InFaceId, const FName& InLabelId, const FText& InMessage);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetConversationMessageMode(const UObject* WorldContextObject, EKizokConversationMessageMode InMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConversationMessageData(UKizokButtonWidget* InWidget, const FName& InFaceId, const FName& InLabelId, const FName& InMessageId, UDataTable* InMessageTable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void RegisterScrollBox(UScrollBox* InScrollBox);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterMessageWithVoiceToTimeFromVoice(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FText& InMessage, const FName& InVoiceId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterMessageWithVoiceFromTextIdToTimeFromVoice(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FName& InMessageId, const FName& InVoiceId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterMessageWithVoiceFromTextId(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FName& InMessageId, float InMessageTime, const FName& InVoiceId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterMessageWithVoice(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FText& InMessage, float InMessageTime, const FName& InVoiceId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterMessageFromTextId(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FName& InMessageId, float InMessageTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterMessageDataTable(const UObject* WorldContextObject, UDataTable* InMessageDataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterMessage(const UObject* WorldContextObject, const FName& InLabelId, const FName& InFaceId, const FText& InMessage, float InMessageTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterFieldMessage(const UObject* WorldContextObject, const FName& InMessageKey);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InConversationWidget(UKizokButtonWidget* InWidget);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokConversationWidget* GetConversationWidget(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutConversationWidget(UKizokButtonWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseConversationWidget(UKizokButtonWidget* InWidget);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearMessageDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindSkipMessageEvent(const UObject* WorldContextObject, FKizokOnSkipMessageEvent InBindDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindLastRegisterMessageFinishEvent(const UObject* WorldContextObject, FKizokOnFinishMessageTimeEvent InBindDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BindDisplayMessageEvent(const UObject* WorldContextObject, FKizokOnDisplayMessageEvent InBindDelegate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllMessageDeleteEvent();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AllDeleteMessage(const UObject* WorldContextObject, bool IsStopVoice);
    
};

