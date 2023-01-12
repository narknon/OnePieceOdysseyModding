#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneWeaponValue.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWeaponValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisible;
    
    KIZOK_API FKizokMovieSceneWeaponValue();
};

