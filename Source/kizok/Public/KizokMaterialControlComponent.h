#pragma once
#include "CoreMinimal.h"
#include "EMaterialPriority.h"
#include "KizokMeshDynamicMaterial.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "KizokMaterialControlComponent.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokMaterialControlComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectWeapons;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokMeshDynamicMaterial> MaterialList;
    
public:
    UKizokMaterialControlComponent();
    UFUNCTION(BlueprintCallable)
    void RestoreMaterials();
    
    UFUNCTION(BlueprintCallable)
    void CollectMaterials(bool bClear);
    
    UFUNCTION(BlueprintCallable)
    void ClearMaterialValue();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterialValueWithSlotName(FName SlotName, FName Name, float Value, EMaterialPriority Priority, bool bFacial);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterialValueWithMeshAndMaterial(FName MeshName, FName MaterialName, FName Name, float Value, EMaterialPriority Priority, bool bFacial);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterialValueWithMaterialName(FName MaterialName, FName Name, float Value, EMaterialPriority Priority, bool bFacial);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterialValueWithAnimationCurve(UAnimInstance* AnimInstance, EMaterialPriority Priority, bool bFacial);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterialValue(FName Name, float Value, EMaterialPriority Priority, bool bFacial);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterialColorWithMeshAndMaterial(FName MeshName, FName MaterialName, FName Name, FLinearColor Value, EMaterialPriority Priority, bool bFacial);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterialColorWithMaterialName(FName MaterialName, FName Name, FLinearColor Value, EMaterialPriority Priority, bool bFacial);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterialColor(FName Name, FLinearColor Value, EMaterialPriority Priority, bool bFacial);
    
};

