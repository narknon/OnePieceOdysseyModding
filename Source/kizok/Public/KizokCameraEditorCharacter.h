#pragma once
#include "CoreMinimal.h"
#include "KizokDebugCharacter.h"
#include "KizokCameraEditorCharacter.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokCameraEditorCharacter : public AKizokDebugCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterID;
    
    AKizokCameraEditorCharacter();
    UFUNCTION(BlueprintCallable)
    void TakeOverOperation();
    
};

