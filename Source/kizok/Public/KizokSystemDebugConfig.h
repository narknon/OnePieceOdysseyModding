#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureDefines.h"
#include "KizokDebugTextureGroupSectionMemorySetting.h"
#include "UObject/Object.h"
#include "KizokSystemDebugConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class KIZOK_API UKizokSystemDebugConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<TextureGroup>, FString> TexGroupSectionSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FKizokDebugTextureGroupSectionMemorySetting> SectionMemSetting;
    
    UKizokSystemDebugConfig();
};

