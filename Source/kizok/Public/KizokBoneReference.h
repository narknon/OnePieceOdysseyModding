#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "KizokBoneReference.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokBoneReference : public FBoneReference {
    GENERATED_BODY()
public:
    FKizokBoneReference();
};

