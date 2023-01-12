#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSection.h"
#include "MovieSceneSofdec2Section.generated.h"

class UManaTexture;
class UFileManaMovie;
class UManaMovie;
class UManaComponent;

UCLASS(Blueprintable)
class SOFDEC2_API UMovieSceneSofdec2Section : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileManaMovie* FileManaMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* ManaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID BindingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableApplyMovieChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* ManaComponent;
    
    UMovieSceneSofdec2Section();
private:
    UFUNCTION(BlueprintCallable)
    void OnMovieChanged(UManaMovie* InMovie, UManaComponent* InManaComponent);
    
};

