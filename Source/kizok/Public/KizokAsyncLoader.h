#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokLoadObjectInfo.h"
#include "UObject/Object.h"
#include "KizokAsyncLoader.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokAsyncLoader : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ObjectPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokLoadObjectInfo> LoadInfoList;
    
public:
    UKizokAsyncLoader();
};

