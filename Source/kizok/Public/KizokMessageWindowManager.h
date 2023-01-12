#pragma once
#include "CoreMinimal.h"
#include "MessageParam.h"
#include "UObject/Object.h"
#include "KizokMessageWindowManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokMessageWindowManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMessageParam> m_MessageStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_PushChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsTextChangeControllerNPC;
    
public:
    UKizokMessageWindowManager();
    UFUNCTION(BlueprintCallable)
    void YesNoWindowMessageStr(const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void YesNoWindowMessage(FName Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void YesNoWindow(int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void YesNoMessageStr(const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void YesNoMessageCharStr(FName chara_id, const FString& Message, int32 default_select, bool is_otther_window, const FString& head_line);
    
    UFUNCTION(BlueprintCallable)
    void YesNoMessageChar(FName chara_id, FName Message, int32 default_select, bool is_otther_window, const FString& head_line);
    
    UFUNCTION(BlueprintCallable)
    void YesNoMessage(FName Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void YesNoHeadlineStr(const FString& headline, const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void YesNoHeadline(FName headline, FName Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void StartCubeGetMenuEvent();
    
    UFUNCTION(BlueprintCallable)
    void SelectWindowStr(const FString& select1, const FString& select2, const FString& select3, const FString& select4, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void SelectMessageStr(const FString& Message, const FString& select1, const FString& select2, const FString& select3, const FString& select4, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void SelectMessageCharStr(FName chara_id, const FString& Message, const FString& select1, const FString& select2, const FString& select3, const FString& select4, int32 default_select, bool is_otther_window, const FString& head_line);
    
    UFUNCTION(BlueprintCallable)
    void SelectHeadlineStr(const FString& headline, const FString& Message, const FString& select1, const FString& select2, const FString& select3, const FString& select4, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void ResetMessage();
    
    UFUNCTION(BlueprintCallable)
    bool IsTalkEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsMessageWindowOpen();
    
    UFUNCTION(BlueprintCallable)
    int32 GetChoiceId();
    
    UFUNCTION(BlueprintCallable)
    void CurrentMessageEnd();
    
    UFUNCTION(BlueprintCallable)
    void ChoiceWindowStr(const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceWindowMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceWindowMessage(FName Message, FName select1, FName select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceWindow(FName select1, FName select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceMessageCharStr(FName chara_id, const FString& Message, const FString& select1, const FString& select2, int32 default_select, bool is_otther_window, const FString& head_line);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceMessageChar(FName chara_id, FName Message, FName select1, FName select2, int32 default_select, bool is_otther_window, const FString& head_line);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceMessage(FName Message, FName select1, FName select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceHeadlineStr(const FString& headline, const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    void ChoiceHeadline(FName headline, FName Message, FName select1, FName select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_YesNoWindowStr(int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_YesNoWindowMessageStr(const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_YesNoMessageStr(const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_YesNoMessageCharStr(FName chara_id, const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_YesNoHeadlineStr(const FString& headline, const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_SelectWindowStr(const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_SelectMessageStr(const FString& Message, const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_SelectMessageCharStr(FName chara_id, const FString& Message, const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_ResetMessage();
    
    UFUNCTION(BlueprintCallable)
    static bool BC_IsMessageWindowOpen();
    
    UFUNCTION(BlueprintCallable)
    static int32 BC_GetChoiceId();
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugYesNoWindowMessageStr(const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugYesNoMessageStr(const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugYesNoMessageCharStr(FName chara_id, const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugYesNoHeadlineStr(const FString& headline, const FString& Message, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugSelectWindowStr(const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugSelectMessageStr(const FString& Message, const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugSelectMessageCharStr(FName chara_id, const FString& Message, const FString& select0, const FString& select1, const FString& select2, const FString& select3, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugChoiceWindowStr(const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugChoiceWindowMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugChoiceMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugChoiceMessageCharStr(FName chara_id, const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugChoiceHeadlineStr(const FString& headline, const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugAddMessageStr(const FString& Message, float sec, bool isCursor, bool NewIsTalkEnd);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugAddHeadlineMessageStr(const FString& headline, const FString& Message, float sec);
    
    UFUNCTION(BlueprintCallable)
    static void BC_DebugAddCharaMessageStr(FName chara_id, const FString& Message, float sec);
    
    UFUNCTION(BlueprintCallable)
    static void BC_CurrentFieldMessageEnd();
    
    UFUNCTION(BlueprintCallable)
    static void BC_ChoiceWindowStr(const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_ChoiceWindowMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_ChoiceMessageStr(const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_ChoiceMessageCharStr(FName chara_id, const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_ChoiceHeadlineStr(const FString& headline, const FString& Message, const FString& select1, const FString& select2, int32 default_select);
    
    UFUNCTION(BlueprintCallable)
    static void BC_AllFieldMessageEnd();
    
    UFUNCTION(BlueprintCallable)
    static void BC_AddMessageStr(const FString& Message, float sec, bool isCursor, bool NewIsTalkEnd);
    
    UFUNCTION(BlueprintCallable)
    static void BC_AddHeadlineMessageStr(const FString& headline, const FString& Message, float sec);
    
    UFUNCTION(BlueprintCallable)
    static void BC_AddFieldMessageID(const FString& text_id, bool is_load_group, float sec, bool isCursor);
    
    UFUNCTION(BlueprintCallable)
    static void BC_AddFieldMessage(const FString& Message, FName chara_id, float sec, bool isCursor);
    
    UFUNCTION(BlueprintCallable)
    static void BC_AddCharaMessageStr(FName chara_id, const FString& Message, float sec);
    
    UFUNCTION(BlueprintCallable)
    void AllMessageEnd();
    
    UFUNCTION(BlueprintCallable)
    void AddMessageStr(const FString& Message, float sec, bool isCursor, bool talkEnd);
    
    UFUNCTION(BlueprintCallable)
    void AddMessage(FName Message, float sec, bool isCursor);
    
    UFUNCTION(BlueprintCallable)
    void AddHeadlineMessageStr(const FString& headline, const FString& Message, float sec, bool talkEnd);
    
    UFUNCTION(BlueprintCallable)
    void AddHeadlineMessage(FName headline, FName Message, float sec);
    
    UFUNCTION(BlueprintCallable)
    void AddFieldMessageStr(const FString& Message, FName chara_id, float sec, bool isCursor);
    
    UFUNCTION(BlueprintCallable)
    void AddFieldMessage(FName Message, FName chara_id, float sec, bool isCursor);
    
    UFUNCTION(BlueprintCallable)
    void AddCSMessageStr(const FString& Message, FName LabelID, FName Layout, FName FaceID, float sec);
    
    UFUNCTION(BlueprintCallable)
    void AddCSMessage(FName Message, FName LabelID, FName Layout, FName FaceID, float sec);
    
    UFUNCTION(BlueprintCallable)
    void AddCharaMessageStr(FName chara_id, const FString& Message, float sec, bool talkEnd);
    
    UFUNCTION(BlueprintCallable)
    void AddCharaMessage(FName chara_id, FName Message, float sec);
    
};

