#include "KizokNpcBase.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokNpcBase::TalkInputCheck() {
}

void AKizokNpcBase::Talk(const FString& TalkID) {
}

void AKizokNpcBase::SetUpperFacialID(const FName& ID) {
}

void AKizokNpcBase::SetTalkMotion(const FName& Name) {
}

void AKizokNpcBase::SetTalkLoopMotion(const FName& Name) {
}

void AKizokNpcBase::SetLowerFacialID(const FName& ID) {
}

void AKizokNpcBase::SetLookAtTag(const FName& Tag) {
}

void AKizokNpcBase::SetLookatRot(float Yaw, float Pitch, float Roll) {
}

void AKizokNpcBase::SetFacialID(const FName& ID) {
}

void AKizokNpcBase::ResetTalkMotion() {
}

void AKizokNpcBase::ResetLookAt() {
}

void AKizokNpcBase::ResetFacial() {
}

void AKizokNpcBase::OnOverlapEndShowIconArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokNpcBase::OnOverlapEndInteractArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokNpcBase::OnOverlapBeginShowIconArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokNpcBase::OnOverlapBeginInteractArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

int32 AKizokNpcBase::GetMessageChoiceID() {
    return 0;
}

TArray<FKizokAttachWeaponParam> AKizokNpcBase::GetAttachWeapons() {
    return TArray<FKizokAttachWeaponParam>();
}

AKizokNpcBase::AKizokNpcBase() {
    this->m_pInteractAreaVolume = CreateDefaultSubobject<USphereComponent>(TEXT("InteractAreaVolume"));
    this->m_pShowIconAreaVolume = CreateDefaultSubobject<USphereComponent>(TEXT("ShowIconAreaVolume"));
    this->m_bIsLookAtPlayer = true;
    this->m_bIsSlipThrough = false;
    this->m_SlipThroughEnableTime = 0.50f;
    this->m_TalkMotionID = 0;
    this->NpcCategory = ENpcCategory::Normal;
    this->ShopId = TEXT("1");
    this->WalkSpeed = 100.00f;
    this->RunSpeed = 200.00f;
    this->BeforeFadeTime = 60.00f;
    this->FadeOutTime = 5.00f;
    this->RebornTime = 2.00f;
    this->FadeInTime = 1.00f;
    this->m_pTexture = NULL;
    this->InteractTexture = NULL;
    this->Marker = NULL;
    this->TargetMarker = NULL;
    this->Spline = NULL;
}

