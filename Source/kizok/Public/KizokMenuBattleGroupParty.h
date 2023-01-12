#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuGruopType.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleGroupParty.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleGroupParty : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuGruopType GroupType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurPlayerNumInGroup;
    
public:
    UKizokMenuBattleGroupParty();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispByGroupType();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidGroupTypeData();
    
    UFUNCTION(BlueprintCallable)
    void InitOrderParts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitCharaStatus(int32 orderIdx);
    
};

