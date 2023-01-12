#pragma once
#include "CoreMinimal.h"
#include "EndNPCTalkSetDelegate.h"
#include "BeginNPCTalkSetDelegate.h"
#include "GimmickNPCTalkerInfo.h"
#include "Engine/TriggerBase.h"
#include "KizokTriggerNPCMessage.generated.h"

class AKizokNpcBase;

UCLASS(Blueprintable)
class AKizokTriggerNPCMessage : public ATriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginNPCTalkSet BeginNPCTalkSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndNPCTalkSet EndNPCTalkSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MessageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGimmickNPCTalkerInfo> Talkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Repeat;
    
    AKizokTriggerNPCMessage();
    UFUNCTION(BlueprintCallable)
    bool StartNPCTalkSet();
    
    UFUNCTION(BlueprintCallable)
    void SetRepeat(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRepeat() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CallNPCNextTalkInfo(const FName& ID, const int32& Index);
    
    UFUNCTION(BlueprintCallable)
    void CallNPCEndTalk(const AKizokNpcBase* npc);
    
};

