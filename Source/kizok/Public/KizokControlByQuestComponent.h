#pragma once
#include "CoreMinimal.h"
#include "QuestProgress.h"
#include "Components/ActorComponent.h"
#include "KizokControlByQuestComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokControlByQuestComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestProgress> ObjectHideSeq;
    
public:
    UKizokControlByQuestComponent();
};

