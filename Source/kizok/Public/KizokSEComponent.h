#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "KizokSEComponent.generated.h"

class USceneComponent;
class USoundAtomCueSheet;
class USoundAtomCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokSEComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundAtomCue*> CueList;
    
    UKizokSEComponent();
    UFUNCTION(BlueprintCallable)
    void Stop(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    void Resume(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySurroundDirectCue(FName Name, FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySurround(FName Name, FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySEAutoCheck(FName Name, bool bAcrossLevel);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayDirectCue(FName Name, bool bAcrossLevel);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayAttachedSEAutoCheck(FName Name, USceneComponent* Parent, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    int32 Play(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void Pause(int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying(int32 Handle) const;
    
    UFUNCTION(BlueprintCallable)
    float GetPlayPosition(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    float GetLength(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    bool Contains(FName CueName);
    
};

