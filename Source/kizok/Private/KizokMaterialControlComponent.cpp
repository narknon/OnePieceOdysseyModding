#include "KizokMaterialControlComponent.h"

class UAnimInstance;

void UKizokMaterialControlComponent::RestoreMaterials() {
}

void UKizokMaterialControlComponent::CollectMaterials(bool bClear) {
}

void UKizokMaterialControlComponent::ClearMaterialValue() {
}

void UKizokMaterialControlComponent::ChangeMaterialValueWithSlotName(FName SlotName, FName Name, float Value, EMaterialPriority Priority, bool bFacial) {
}

void UKizokMaterialControlComponent::ChangeMaterialValueWithMeshAndMaterial(FName MeshName, FName MaterialName, FName Name, float Value, EMaterialPriority Priority, bool bFacial) {
}

void UKizokMaterialControlComponent::ChangeMaterialValueWithMaterialName(FName MaterialName, FName Name, float Value, EMaterialPriority Priority, bool bFacial) {
}

void UKizokMaterialControlComponent::ChangeMaterialValueWithAnimationCurve(UAnimInstance* AnimInstance, EMaterialPriority Priority, bool bFacial) {
}

void UKizokMaterialControlComponent::ChangeMaterialValue(FName Name, float Value, EMaterialPriority Priority, bool bFacial) {
}

void UKizokMaterialControlComponent::ChangeMaterialColorWithMeshAndMaterial(FName MeshName, FName MaterialName, FName Name, FLinearColor Value, EMaterialPriority Priority, bool bFacial) {
}

void UKizokMaterialControlComponent::ChangeMaterialColorWithMaterialName(FName MaterialName, FName Name, FLinearColor Value, EMaterialPriority Priority, bool bFacial) {
}

void UKizokMaterialControlComponent::ChangeMaterialColor(FName Name, FLinearColor Value, EMaterialPriority Priority, bool bFacial) {
}

UKizokMaterialControlComponent::UKizokMaterialControlComponent() {
    this->bAffectWeapons = false;
}

