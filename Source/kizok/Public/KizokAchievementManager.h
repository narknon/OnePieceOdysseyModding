#pragma once
#include "CoreMinimal.h"
#include "EKizokAchievementSaveDataType.h"
#include "UObject/Object.h"
#include "KizokAchievementManager.generated.h"

class UKizokAchievement;
class UKizokLog;

UCLASS(Blueprintable)
class KIZOK_API UKizokAchievementManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokAchievement* Achievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokLog* Log;
    
public:
    UKizokAchievementManager();
    UFUNCTION(BlueprintCallable)
    void Update(const EKizokAchievementSaveDataType InSaveDataType, const int32 InValue, const FName& InLimitParam);
    
};

