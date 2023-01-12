#pragma once
#include "CoreMinimal.h"
#include "EKizokChapterResultSkillCubeType.h"
#include "KizokChapterResultSkillCubeData.generated.h"

USTRUCT(BlueprintType)
struct FKizokChapterResultSkillCubeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokChapterResultSkillCubeType CubeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    KIZOK_API FKizokChapterResultSkillCubeData();
};

