#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WidgetDebugCommonDataSet.h"
#include "EFlagChangedReason.h"
#include "EWidgetDebugExecType.h"
#include "KizokDebugFixCameraParam.h"
#include "UObject/Object.h"
#include "KizokDebugManager.generated.h"

class UKizokAssetMemConsoleCommand;
class UKizokDebugDrawManager;
class UKizokDebugDrawFieldPlayerState;
class UKizokCSShotSectionJump;
class UKizokDebuggerMainWidget;
class UKizokDebugTextWidget;
class UKizokDebugSoundCommand;
class UKizokDebugPhysicalMaterial;
class UKizokFlagDataCommon;
class AKizokFieldPlayerBase;
class UKizokLevelSequenceDebugDraw;
class UKizokMotionViewer;
class UKizokMotionNameViewer;
class AKizokNewBattlePlayerBase;
class UKizokNamedFlagData;
class UKizokSaveGame;
class UKizokProcessTimeDraw;
class AKizokSky;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebugManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebugTextWidget> DebugWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCameraDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isToggleDebugCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isWarpDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float globalTimeDelation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool displayInputDebug;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AKizokSky> KizokSky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokDebugFixCameraParam> AllCameraActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKizokNewBattlePlayerBase*> AllBattlePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKizokFieldPlayerBase*> AllFieldPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokMotionViewer* m_MotionViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebugSoundCommand* DebugSoundCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebugPhysicalMaterial* PhysMtrlCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebugDrawFieldPlayerState* FieldPlayerStateDebugDraw;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebuggerMainWidget* m_debuggerWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebugTextWidget* DebugMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokMotionNameViewer* MotionNameViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokLevelSequenceDebugDraw* LevelSequenceDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokCSShotSectionJump* CSShotSectionJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokProcessTimeDraw* ProcessTimeDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokAssetMemConsoleCommand* AssetMem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebugDrawManager* DebugDrawManager;
    
public:
    UKizokDebugManager();
private:
    UFUNCTION(BlueprintCallable)
    void ToggleCutSceneDebugMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void Test(int32 Command, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void StartDebugWidget();
    
    UFUNCTION(BlueprintCallable)
    void PreSaveRoutine(UKizokSaveGame* SaveGame, UKizokNamedFlagData* namedFlagData, UKizokFlagDataCommon* flagData);
    
    UFUNCTION(BlueprintCallable)
    void PreLoadRoutine(UKizokSaveGame* SaveGame, UKizokNamedFlagData* namedFlagData, UKizokFlagDataCommon* flagData);
    
    UFUNCTION(BlueprintCallable)
    bool OnRequestDebugData(FWidgetDebugCommonDataSet& dataset);
    
    UFUNCTION(BlueprintCallable)
    void OnFlagChanged(EFlagChangedReason reason, UKizokNamedFlagData* namedFlagData, UKizokFlagDataCommon* flagData);
    
    UFUNCTION(BlueprintCallable)
    void OnClickDebugButton(EWidgetDebugExecType execType, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDebugData(FWidgetDebugCommonDataSet& dataset);
    
    UFUNCTION(BlueprintCallable)
    void LoadedRoutine(UKizokSaveGame* SaveGame, UKizokNamedFlagData* namedFlagData, UKizokFlagDataCommon* flagData);
    
    UFUNCTION(BlueprintCallable)
    void EndDebugWidget();
    
};

