#pragma once
#include "CoreMinimal.h"
#include "Fellow.h"
#include "KizokSkillPresenNotifyState.h"
#include "KArtsPresenNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class KIZOK_API UKArtsPresenNotifyState : public UKizokSkillPresenNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFellow> FellowParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseP007CostumeID;
    
public:
    UKArtsPresenNotifyState();
};

