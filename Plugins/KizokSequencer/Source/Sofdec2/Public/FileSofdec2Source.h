#pragma once
#include "CoreMinimal.h"
#include "BaseSofdec2Source.h"
#include "FileSofdec2Source.generated.h"

UCLASS(Blueprintable)
class SOFDEC2_API UFileSofdec2Source : public UBaseSofdec2Source {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrecacheFile;
    
    UFileSofdec2Source();
    UFUNCTION(BlueprintCallable)
    void SetFilePath(const FString& Path);
    
};

