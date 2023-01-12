#include "KizokIconActorComponent.h"

class UTexture2D;

void UKizokIconActorComponent::VisibleIcon(int32 Index, bool IsAnim) {
}

void UKizokIconActorComponent::UpdateIconTrans(FIconInfo& Info) {
}

void UKizokIconActorComponent::SetTransUpdate(int32 Index, bool flag) {
}

void UKizokIconActorComponent::SetPosition(int32 Index, FVector Pos) {
}

void UKizokIconActorComponent::SetIconVisibleFlag(int32 Index, bool flag) {
}

void UKizokIconActorComponent::SetIconRno(int32 Index, EIconRoutine Rno) {
}

void UKizokIconActorComponent::SetIconHideState(int32 Index) {
}

void UKizokIconActorComponent::SetIconAnimFlag(int32 Index, bool flag) {
}

void UKizokIconActorComponent::RemoveScreenIcon(int32 Index, bool IsAnim) {
}

void UKizokIconActorComponent::RemoveIcon(int32 Index) {
}

int32 UKizokIconActorComponent::RegistIcon(UTexture2D* tex, FVector Pos, bool IsAttachOwner) {
    return 0;
}

bool UKizokIconActorComponent::IsVisibleIcon(int32 Index) {
    return false;
}

bool UKizokIconActorComponent::IsValidNumber(int32 Index) {
    return false;
}

void UKizokIconActorComponent::HideIcon(int32 Index, bool IsAnim) {
}

TMap<int32, FIconInfo> UKizokIconActorComponent::GetIconsMap() {
    return TMap<int32, FIconInfo>();
}

FIconInfo UKizokIconActorComponent::GetIcon(int32 Index) {
    return FIconInfo{};
}

void UKizokIconActorComponent::DeleteIcon(int32 Index) {
}

void UKizokIconActorComponent::ChangeTexture(int32 Index, UTexture2D* tex, const FName& Name) {
}

void UKizokIconActorComponent::AllVisibleIcon() {
}

void UKizokIconActorComponent::AllRemoveIcon() {
}

void UKizokIconActorComponent::AllHideIcon() {
}

void UKizokIconActorComponent::AddScreenIcon(int32 Index, bool IsAnim) {
}

int32 UKizokIconActorComponent::AddIcon(UClass* WidgetClass, FVector Offset, FName socket, bool isTransUpdate, UTexture2D* tex, bool isAddScreen) {
    return 0;
}

UKizokIconActorComponent::UKizokIconActorComponent() {
    this->IsObstacle = true;
}

