#pragma once
#include "CoreMinimal.h"
#include "KizokLoadMenu.h"
#include "DLC01LoadMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDLC01LoadMenu : public UKizokLoadMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLC01AreaNameId;
    
public:
    UDLC01LoadMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLCArea(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDLC01AreaName() const;
    
};

