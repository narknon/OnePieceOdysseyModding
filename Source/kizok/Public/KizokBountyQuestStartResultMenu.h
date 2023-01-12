#pragma once
#include "CoreMinimal.h"
#include "KizokBountyQuestStartResultMenuData.h"
#include "KizokQuestStartResultMenuBase.h"
#include "KizokBountyQuestStartResultMenu.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBountyQuestStartResultMenu : public UKizokQuestStartResultMenuBase {
    GENERATED_BODY()
public:
    UKizokBountyQuestStartResultMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetBountyQuestTextTable() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokBountyQuestStartResultMenuData GetBountyQuestData();
    
};

