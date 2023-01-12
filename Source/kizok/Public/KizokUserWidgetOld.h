#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KizokUserWidgetOld.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokUserWidgetOld : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OpenAnimeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LoopAnimeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CloseAnimeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCloseAnimeReverse;
    
    UKizokUserWidgetOld();
};

