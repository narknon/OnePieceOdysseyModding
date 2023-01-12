#include "KizokFieldPlayerLuf.h"

class UPrimitiveComponent;
class AActor;

void AKizokFieldPlayerLuf::OnDamageImpl(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokFieldPlayerLuf::DetachTorch() {
}

void AKizokFieldPlayerLuf::CancelGGMove() {
}

void AKizokFieldPlayerLuf::AttachTorch() {
}

AKizokFieldPlayerLuf::AKizokFieldPlayerLuf() {
    this->RocketStName = TEXT("Rocket00_St");
    this->RocketShootName = TEXT("Rocket00_Shoot");
    this->RocketHandgrabName = TEXT("Rocket00_Handgrab");
    this->RocketMoveName = TEXT("Rocket00_Move");
    this->RocketEdName = TEXT("Rocket00_Ed");
    this->RocketCatchStName = TEXT("Rocket00_Catch_St");
    this->RocketCatchEdName = TEXT("Rocket00_Catch_Ed");
    this->RocketFallStName = TEXT("Rocket00_Fall_St");
    this->RocketFallLpName = TEXT("Rocket00_Fall_Lp");
    this->RocketFallEdName = TEXT("Rocket00_Fall_Ed");
    this->RocketWallClimbStName = TEXT("Rocket00_Climb");
    this->RocketLadderStName = TEXT("Rocket00_Ladder");
    this->FreeAtkStName_Up = TEXT("Freegum02_Up_St");
    this->FreeAtkStName_Fw = TEXT("Freegum02_St");
    this->FreeAtkStName_Dw = TEXT("Freegum02_Under_St");
    this->FreeAtkShootName_Up = TEXT("Freegum02_Up_Shoot");
    this->FreeAtkShootName_Fw = TEXT("Freegum02_Shoot");
    this->FreeAtkShootName_Dw = TEXT("Freegum02_Under_Shoot");
    this->FreeAtkShrinkName_Up = TEXT("Freegum02_Up_Shrink");
    this->FreeAtkShrinkName_Fw = TEXT("Freegum02_Shrink");
    this->FreeAtkShrinkName_Dw = TEXT("Freegum02_Under_Shrink");
    this->FreeAtkEdName_Up = TEXT("Freegum02_Up_Ed");
    this->FreeAtkEdName_Fw = TEXT("Freegum02_Ed");
    this->FreeAtkEdName_Dw = TEXT("Freegum02_Under_Ed");
    this->TorchWaitAnimName = TEXT("TorchWait");
    this->FreeAtkStSpeed = 1.00f;
    this->FreeAtkStBlendIn = 0.10f;
    this->FreeAtkStBlendOut = 0.00f;
    this->FreeAtkShootSpeed = 30.00f;
    this->FreeAtkShootBlendIn = 0.00f;
    this->FreeAtkShootBlendOut = 0.00f;
    this->FreeAtkShrinkSpeed = 30.00f;
    this->FreeAtkShrinkBlendIn = 0.00f;
    this->FreeAtkShrinkBlendOut = 0.00f;
    this->FreeAtkEdSpeed = 0.80f;
    this->FreeAtkEdBlendIn = 0.00f;
    this->FreeAtkEdBlendOut = 0.25f;
    this->GGMoveShootSpeed = 5.00f;
    this->GGMoveShootBlendIn = 0.00f;
    this->GGMoveShootBlendOut = 0.25f;
    this->GGMoveHandgrabSpeed = 0.50f;
    this->GGMoveHandgrabBlendIn = 0.00f;
    this->GGMoveHandgrabBlendOut = 0.25f;
    this->GGMoveMotionSpeed = 1.00f;
    this->GGMoveBlendIn = 0.25f;
    this->GGMoveBlendOut = 0.25f;
    this->GGMoveFallStSpeed = 1.00f;
    this->GGMoveFallStBlendIn = 0.00f;
    this->GGMoveFallStBlendOut = 0.00f;
    this->GGMoveFallLpSpeed = 1.00f;
    this->GGMoveFallLpBlendIn = 0.00f;
    this->GGMoveFallLpBlendOut = 0.00f;
    this->GGMoveFallLpRotSpeed = 0.00f;
    this->GGMoveFallEdSpeed = 1.00f;
    this->GGMoveFallEdBlendIn = 0.00f;
    this->GGMoveFallEdBlendOut = 0.00f;
    this->GGMoveFallEdCancelValue = 1.00f;
    this->GGMoveWallClimbStSpeed = 1.00f;
    this->GGMoveWallClimbStBlendIn = 0.00f;
    this->GGMoveWallClimbStBlendOut = 0.00f;
    this->GGMoveWallClimbStRotSlerp = 100.00f;
    this->GGMoveWallClimbLpSpeed = 1.00f;
    this->GGMoveWallClimbLpBlendIn = 0.00f;
    this->GGMoveWallClimbLpBlendOut = 0.00f;
    this->GGMoveLadderStSpeed = 1.00f;
    this->GGMoveLadderStBlendIn = 0.00f;
    this->GGMoveLadderStBlendOut = 0.00f;
    this->GGMoveLadderStRotSlerp = 100.00f;
    this->GGMoveLadderLpSpeed = 1.00f;
    this->GGMoveLadderLpBlendIn = 0.00f;
    this->GGMoveLadderLpBlendOut = 0.00f;
    this->GGAtkShootSpeed = 50.00f;
    this->GGAtkShootBlendIn = 0.00f;
    this->GGAtkShootBlendOut = 0.00f;
    this->GGAtkCatchStSpeed = 30.00f;
    this->GGAtkCatchStBlendIn = 0.00f;
    this->GGAtkCatchStBlendOut = 0.00f;
    this->GGAtkCatchEdSpeed = 1.00f;
    this->GGAtkCatchEdBlendIn = 0.25f;
    this->GGAtkCatchEdBlendOut = 0.25f;
    this->TorchWaitBlendIn = 0.00f;
    this->TorchWaitBlendOut = 0.00f;
    this->GGMoveSpeed = 3000.00f;
    this->GGMoveCameraY = 1.00f;
    this->GGMoveCameraX = 1.00f;
    this->ObservationsColor = NULL;
    this->m_pSequenceActor = NULL;
    this->GumGumRocketGravitySpeed = -1960.00f;
}

