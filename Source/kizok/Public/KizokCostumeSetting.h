#pragma once
#include "CoreMinimal.h"
#include "OnCompletedLoadCostumeDelegate.h"
#include "KizokCostumeSetArray.h"
#include "KizokCostumeSetPattern.h"
#include "Components/ActorComponent.h"
#include "KizokCostumeSetting.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokCostumeSetting : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompletedLoadCostume OnCompletedCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FKizokCostumeSetArray> SkeletalMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FKizokCostumeSetPattern> CostumeSetMap;
    
    UKizokCostumeSetting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletedChangeCharacterCostume() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacterCostumeSync(uint8 CostumeID);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacterCostumeAsync(uint8 CostumeID);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacterCostume(uint8 CostumeID);
    
};

