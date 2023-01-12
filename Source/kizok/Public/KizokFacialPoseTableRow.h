#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FacialBoneInfo.h"
#include "KizokFacialPoseTableRow.generated.h"

class USkeletalMesh;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FKizokFacialPoseTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> CharacterFacialMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> FacialAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFacialBoneInfo> BoneInfo;
    
    KIZOK_API FKizokFacialPoseTableRow();
};

