#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Sofdec2Texture.generated.h"

class USofdec2Player;
class UManaTexture;

UCLASS(Blueprintable)
class SOFDEC2_API USofdec2Texture : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UManaTexture> ManaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoClear;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USofdec2Player* Sofdec2Player;
    
public:
    USofdec2Texture();
    UFUNCTION(BlueprintCallable)
    void SetSofdec2Player(USofdec2Player* NewSofdec2Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USofdec2Player* GetSofdec2Player() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAspectRatio() const;
    
};

