#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokMotionNameViewer.generated.h"

class AActor;
class ULevel;

UCLASS(Blueprintable)
class KIZOK_API UKizokMotionNameViewer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ClickedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevel* NowLevel;
    
public:
    UKizokMotionNameViewer();
};

