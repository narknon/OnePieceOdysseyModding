#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokSaveDataBase.generated.h"

class UKizokSaveDataBlock;

UCLASS(Blueprintable)
class KIZOK_API UKizokSaveDataBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKizokSaveDataBlock*> m_saveDataBlock;
    
    UKizokSaveDataBase();
};

