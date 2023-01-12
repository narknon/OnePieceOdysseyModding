#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokGameManager.generated.h"

class ACharacter;
class UKizokCharacterStatusManager;
class UKizokCharacterManager;
class UKizokDataTable;
class UKizokEventCameraFlagManager;
class UKizokFlagManager;
class AKizokGameMode;
class UKizokGameManager;
class UKizokItemTableManager;
class UKizokItemFlagManager;
class UKizokMapManager;
class UKizokSaveManager;
class UKizokSoundWeather;
class UKizokSoundManager;
class UKizokTimeManager;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UKizokGameManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* KizokMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractIconMaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractIconMinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InteractIconObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InteractIconVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputLStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenuAssertMessageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputPossibleDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputNeutralDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputVerticalRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputHorizontalRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVerticalKeyPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* playerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokCharacterManager* CharacterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokCharacterStatusManager* CharacterStatusManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSaveManager* SaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFlagManager* FlagManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokTimeManager* TimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokItemTableManager* ItemTableManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokItemFlagManager* ItemFlagManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokEventCameraFlagManager* EventCameraFlagManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInit;
    
public:
    UKizokGameManager();
    UFUNCTION(BlueprintCallable)
    void StartDisplaySkillGetMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetInteractIconVisible(bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool IsExsistSkillGetMenu();
    
    UFUNCTION(BlueprintCallable)
    UKizokTimeManager* GetTimeManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokSoundWeather* GetSoundWeather();
    
    UFUNCTION(BlueprintCallable)
    UKizokSoundManager* GetSoundManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokSaveManager* GetSaveManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokMapManager* GetMapManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokItemTableManager* GetItemTableManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokItemFlagManager* GetItemFlagMgr();
    
    UFUNCTION(BlueprintCallable)
    bool GetInteractIconVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKizokGameMode* GetGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UKizokGameManager* GetGameManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokFlagManager* GetFlagManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokEventCameraFlagManager* GetEventCameraFlagManager();
    
    UFUNCTION(BlueprintCallable)
    UKizokDataTable* GetDataTable();
    
    UFUNCTION(BlueprintCallable)
    UKizokCharacterStatusManager* GetCharacterStatusManager();
    
    UFUNCTION(BlueprintCallable)
    void CloseDisplaySkillGetMenu();
    
};

