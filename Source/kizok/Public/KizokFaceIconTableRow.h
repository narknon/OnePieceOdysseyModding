#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokTableRowName.h"
#include "KizokFaceIconTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokFaceIconTableRow : public FKizokTableRowName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GraphicTexture;
    
    KIZOK_API FKizokFaceIconTableRow();
};

