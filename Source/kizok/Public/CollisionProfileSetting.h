#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "CollisionProfileSetting.generated.h"

USTRUCT(BlueprintType)
struct FCollisionProfileSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CollisionProfile;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UniqueId;
    
    KIZOK_API FCollisionProfileSetting();
};

