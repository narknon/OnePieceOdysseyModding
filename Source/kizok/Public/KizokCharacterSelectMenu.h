#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokCharacterSelectMemberType.h"
#include "KizokCharacterSelectDispData.h"
#include "KizokUserWidget.h"
#include "KizokCharacterSelectMenu.generated.h"

class UKizokButtonWidget;
class UPanelWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCharacterSelectMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaFaceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> SubAndGuestCharaFaceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaFlagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ButtonNumberList;
    
public:
    UKizokCharacterSelectMenu();
private:
    UFUNCTION(BlueprintCallable)
    void SwapCharacterData(int32 InIndexA, int32 InIndexB);
    
    UFUNCTION(BlueprintCallable)
    void SetGuestCharacterTextureIndex(int32 InDataIndex, int32 InFlagIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDispDetailMenu(bool bInDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterTextureIndex(int32 InDataIndex, int32 InFlagIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromPanelWidgetAsMember(UPanelWidget* InPanelWidget, int32 InNum, EKizokCharacterSelectMemberType InMemberType);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterButtonFromHorizontalBoxAsMember(UHorizontalBox* InHorizontalBox, EKizokCharacterSelectMemberType InMemberType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuestCharacter(const UKizokButtonWidget* InButtonWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispDetailMenu() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetSubAndGuestCharaFace(uint8 InIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberIndex(const UKizokButtonWidget* InButtonWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGuestCharacterDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokCharacterSelectDispData GetGuestCharacterData(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusMemberIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaFlag(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaFace(uint8 InIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokCharacterSelectDispData GetCharacterDataFromMemberIndex(int32 InMemberIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokCharacterSelectDispData GetCharacterData(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UKizokButtonWidget* GetButtonWidgetFromMemberIndex(int32 InMemberIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetButtonNumber(int32 InIndex) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FocusAllMember(bool bInFocus);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFocusMember(int32 InFocusMemberIndex);
    
};

