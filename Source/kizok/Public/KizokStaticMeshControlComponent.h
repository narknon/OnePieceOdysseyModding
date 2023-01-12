#pragma once
#include "CoreMinimal.h"
#include "CollisionProfileSetting.h"
#include "Components/ActorComponent.h"
#include "KizokStaticMeshControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokStaticMeshControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCollisionProfileSetting> CollisionProfileSettings;
    
public:
    UKizokStaticMeshControlComponent();
};

