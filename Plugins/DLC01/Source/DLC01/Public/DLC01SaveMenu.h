#pragma once
#include "CoreMinimal.h"
#include "KizokSaveMenu.h"
#include "DLC01SaveMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDLC01SaveMenu : public UKizokSaveMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLC01AreaNameId;
    
public:
    UDLC01SaveMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLCArea(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDLC01AreaName() const;
    
};

