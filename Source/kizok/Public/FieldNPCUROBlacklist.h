#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FieldNPCUROBlacklist.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class KIZOK_API UFieldNPCUROBlacklist : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> DisableMeshes;
    
public:
    UFieldNPCUROBlacklist();
};

