#pragma once
#include "CoreMinimal.h"
#include "MotViewerCharaInfo.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FMotViewerCharaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_Mesh;
    
    KIZOK_API FMotViewerCharaInfo();
};

