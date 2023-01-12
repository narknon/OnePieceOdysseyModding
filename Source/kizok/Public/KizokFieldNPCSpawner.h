#pragma once
#include "CoreMinimal.h"
#include "KizokFieldNPCSpawnerOFFDelegate.h"
#include "KizokFieldNPCSpawnerONDelegate.h"
#include "GameFramework/Actor.h"
#include "KizokFieldNPCSpawner.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class AKizokFieldNPCSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldNPCSpawnerON OnSpawnerON;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldNPCSpawnerOFF OnSpawnerOFF;
    
    AKizokFieldNPCSpawner();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<USkeletalMesh*> GetNPCMeshes();
    
    UFUNCTION(BlueprintCallable)
    void ForcedStop();
    
    UFUNCTION(BlueprintCallable)
    void ForcedStartup();
    
};

