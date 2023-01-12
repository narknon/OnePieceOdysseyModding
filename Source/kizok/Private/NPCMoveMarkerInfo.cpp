#include "NPCMoveMarkerInfo.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/ArrowComponent.h"

ANPCMoveMarkerInfo::ANPCMoveMarkerInfo() {
    this->m_pRoot = CreateDefaultSubobject<USceneComponent>(TEXT("NPCMoveMarkerInfoRoot"));
    this->MoveType = ENPCMoveType::ROUND_TRIP;
    this->WalkOrRun = ENPCMarkerWalkOrRun::WALK;
    this->CreateChild = false;
    this->ReturnTime = 0.00f;
    this->npc = NULL;
    this->isSpline = false;
    this->MarkerType = ENPCMarkerType::START;
    this->BasePoint = CreateDefaultSubobject<UArrowComponent>(TEXT("BasePoint"));
    this->isStartMarker = false;
    this->isOneWay = false;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("NPCMoveMarkerSpline"));
}

