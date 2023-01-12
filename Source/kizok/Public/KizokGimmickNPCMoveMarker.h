#pragma once
#include "CoreMinimal.h"
#include "ENPCMoveType.h"
#include "KizokGimmickBase.h"
#include "KizokGimmickNPCMoveMarker.generated.h"

class ANPCMoveMarkerInfo;
class AKizokNpcBase;

UCLASS(Blueprintable)
class AKizokGimmickNPCMoveMarker : public AKizokGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANPCMoveMarkerInfo*> MarkerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCMoveType MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokNpcBase* npc;
    
    AKizokGimmickNPCMoveMarker();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKizokNpcBase* GetNPC();
    
    UFUNCTION(BlueprintCallable)
    void ClearNPC();
    
};

