#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuHitMark.h"
#include "UObject/Object.h"
#include "KizokBattleHitMarkManager.generated.h"

class UKizokMenuBattleHitMark;

UCLASS(Blueprintable)
class KIZOK_API UKizokBattleHitMarkManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokMenuBattleHitMark*> m_HitMarkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlMenuHitMark, UClass*> WidgetRefList;
    
public:
    UKizokBattleHitMarkManager();
};

