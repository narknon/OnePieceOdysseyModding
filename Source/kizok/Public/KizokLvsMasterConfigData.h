#pragma once
#include "CoreMinimal.h"
#include "EKizokLvsMasterConfigType.h"
#include "KizokLvsMasterConfigData.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokLvsMasterConfigData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _levelPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokLvsMasterConfigType _configType;
    
public:
    FKizokLvsMasterConfigData();
};

