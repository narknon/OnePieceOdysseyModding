#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "KizokCampEnter.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokCampEnter : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArrowCursorOffset;
    
    AKizokCampEnter();
    UFUNCTION(BlueprintCallable)
    void SetVisibleCursor(bool bIsVisible, bool bIsAnimation);
    
};

