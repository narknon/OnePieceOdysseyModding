#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "ECRANEPARAMTYPE.h"
#include "EOCCUPYTYPE.h"
#include "EBEGINBATTLECRANEPARAMSW.h"
#include "CraneParamsAdditioal.h"
#include "UnfightableCrane.h"
#include "EnemyCraneParam.h"
#include "BeginBattleGroupCamera.h"
#include "BattleGroupCameraWhenEnemyBecomesAbnormal.h"
#include "BeginBattleGroupCameraWhenEnemyFallen.h"
#include "BeginBattleGroupCameraWhenEnemyReinforced.h"
#include "CraneParamsEx.h"
#include "PlayerIconPathList.h"
#include "CostumeID2Mesh.h"
#include "GameFramework/Actor.h"
#include "KizokBattleDLCExtender.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class KIZOK_API AKizokBattleDLCExtender : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, TSoftObjectPtr<ULevelSequence>> SingleHealLvSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, FSoftObjectPath> StatusCharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, FPlayerIconPathList> CharaIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UClass*> BattleAIMgrBP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsAdditioal> CraneDefaultsNew;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FUnfightableCrane> UnfightableCameraParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FUnfightableCrane> PGSlipDamageCamera;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOCCUPYTYPE, FEnemyCraneParam> EMSlipDamageCamera;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsEx> SituationBustupParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsEx> SituationBustupParamsLeftA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsEx> SituationBustupParamsLeftB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsEx> SituationBustupParamsRightA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsEx> SituationBustupParamsRightB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBEGINBATTLECRANEPARAMSW, FBeginBattleGroupCamera> BeginBattleCameraParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBEGINBATTLECRANEPARAMSW, FBattleGroupCameraWhenEnemyBecomesAbnormal> EnemyBecomeAbnormalCameraParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBEGINBATTLECRANEPARAMSW, FBeginBattleGroupCameraWhenEnemyFallen> EnemyFallenCameraParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBEGINBATTLECRANEPARAMSW, FBeginBattleGroupCameraWhenEnemyReinforced> ReinforcementCameraParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsEx> EnableKizunaArtsParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsEx> AddedKizunaParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECRANEPARAMTYPE, FCraneParamsEx> SubstitutesDiedParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, FCostumeID2Mesh> SecondaryCacheMeshDictParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath VABoostPath;
    
    AKizokBattleDLCExtender();
};

