#pragma once
#include "CoreMinimal.h"
#include "RailCameraLineSegmentInfo.h"
#include "Components/SceneComponent.h"
#include "KizokRailCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokRailCameraComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRailCameraLineSegmentInfo> m_LSInfo;
    
public:
    UKizokRailCameraComponent();
};

