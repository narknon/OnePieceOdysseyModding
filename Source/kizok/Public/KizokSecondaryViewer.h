#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokSecondaryViewer.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API AKizokSecondaryViewer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ModelInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AnimListTable;
    
    AKizokSecondaryViewer();
};

