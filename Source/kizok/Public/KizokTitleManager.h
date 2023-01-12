#pragma once
#include "CoreMinimal.h"
#include "KizokOnOpenTitleLogoMenuEventDelegate.h"
#include "KizokEndBonusSequenceDelegateDelegate.h"
#include "KizokOnPlayedActivityDelegateDelegate.h"
#include "KizokOnPlayedActivityEventDelegate.h"
#include "KizokOnFailedBonusDelegateDelegate.h"
#include "KizokOnFailedBonusEventDelegate.h"
#include "KizokOnCompleteLoadActivityGameDataDelegateDelegate.h"
#include "KizokOnCompleteLoadActivityGameDataEventDelegate.h"
#include "KizokOnStartOutTitleMenuDelegateDelegate.h"
#include "KizokOnStartOutTitleMenuEventDelegate.h"
#include "KizokOnOpenTitleStartupMenuDelegateDelegate.h"
#include "KizokOnOpenTitleStartupMenuEventDelegate.h"
#include "KizokOnSkipTitleMovieDelegateDelegate.h"
#include "KizokOnSkipTitleMovieEventDelegate.h"
#include "KizokOnPlayTitleMovieDelegateDelegate.h"
#include "KizokOnPlayTitleMovieEventDelegate.h"
#include "KizokOnSelectNewGameTitleMenuDelegateDelegate.h"
#include "KizokOnSelectNewGameTitleManagerEventDelegate.h"
#include "KizokOnFinishTitleLogoInDelegateDelegate.h"
#include "KizokOnFinishTitleLogoInEventDelegate.h"
#include "KizokOnOpenTitleLogoMenuDelegateDelegate.h"
#include "UObject/Object.h"
#include "KizokTitleManager.generated.h"

class UKizokBonusSequence;
class UKizokSystemSaveSequence;
class UKizokTitleManager;
class UKizokTitleLogoMenu;
class UKizokTitleLicenceMenu;
class UKizokTitleData;

UCLASS(Blueprintable)
class KIZOK_API UKizokTitleManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokTitleLicenceMenu* TitleLicenceMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokTitleLogoMenu* TitleLogoMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnOpenTitleLogoMenuEvent OnOpenTitleLogoMenuEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnFinishTitleLogoInEvent OnFinishTitleLogoInEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnSelectNewGameTitleManagerEvent OnSelectNewGameTitleManagerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnPlayTitleMovieEvent OnPlayTitleMovieEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnSkipTitleMovieEvent OnSkipTitleMovieEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnOpenTitleStartupMenuEvent OnOpenTitleStartupMenuEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnStartOutTitleMenuEvent OnStartOutTitleMenuEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnCompleteLoadActivityGameDataEvent OnCompleteLoadActivityGameDataEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnFailedBonusEvent OnFailedBonusEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnPlayedActivityEvent OnPlayedActivityEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokTitleData* TitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemSaveSequence* SystemSaveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivitySlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAyncThreadFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBonusSequence* BonusSequence;
    
public:
    UKizokTitleManager();
protected:
    UFUNCTION(BlueprintCallable)
    void WaitAsyncFinish();
    
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokTitleManager* StartTitle(const UObject* WorldContextObject, TSoftClassPtr<UKizokTitleData> InTitleDataClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartBonusSequence(FKizokEndBonusSequenceDelegate InDelegate);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokTitleManager* StartActivity(const UObject* WorldContextObject, TSoftClassPtr<UKizokTitleData> InTitleDataClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayMovie();
    
    UFUNCTION(BlueprintCallable)
    void OpenTitleStartupMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenTitleMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenTitleLogoMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenTitleLicenceMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenStartupOrTitleLogo();
    
    UFUNCTION(BlueprintCallable)
    void OpenAutoSaveIconDescMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenActivityLogo();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 OnCompleteLoadActivitySaveData();
    
    UFUNCTION(BlueprintCallable)
    bool LoadActivitySaveData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadActivityGameData();
    
    UFUNCTION(BlueprintCallable)
    void GiveBonus();
    
private:
    UFUNCTION(BlueprintCallable)
    void DestoryTitleManager();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CompleteAsyncFinish();
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseTitleLogoMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseTitleLicenceMenuEvent();
    
    UFUNCTION(BlueprintCallable)
    void CheckDemo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckBonus(bool bInResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void CallStartOutTitleMenuEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallOnSelectNewGameTitleManagerEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallFinishTitleLogoInEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void BindStartOutTitleMenuEvent(FKizokOnStartOutTitleMenuDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindSkipTitleMovieEvent(FKizokOnSkipTitleMovieDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindSelectNewGameTitleMenuEvent(FKizokOnSelectNewGameTitleMenuDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindPlayTitleMovieEvent(FKizokOnPlayTitleMovieDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindPlayedActivityEvent(FKizokOnPlayedActivityDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindOpenTitleStartupMenuEvent(FKizokOnOpenTitleStartupMenuDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindOpenTitleLogoMenuEvent(FKizokOnOpenTitleLogoMenuDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindFinishTitleLogoInEvent(FKizokOnFinishTitleLogoInDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindFailedBonusEvent(FKizokOnFailedBonusDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindCompleteLoadActivityGameDataEvent(FKizokOnCompleteLoadActivityGameDataDelegate InEvent);
    
};

