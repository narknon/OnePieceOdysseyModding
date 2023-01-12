#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokOnCompletedTextureStreamingEventDelegate.h"
#include "KizokOnCompletedCaptureTargetSpawnEventDelegate.h"
#include "GameFramework/Actor.h"
#include "KizokCaptureRoom.generated.h"

class UImage;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class KIZOK_API AKizokCaptureRoom : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneCaptureComponent2D*> CaptureTargetCameraList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CaptureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> RenderTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFOVAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnCompletedCaptureTargetSpawnEvent CompletedSpawnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnCompletedTextureStreamingEvent CompletedTextureStreamingEvent;
    
public:
    AKizokCaptureRoom();
    UFUNCTION(BlueprintCallable)
    void StartCapture();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegisterCaptureTargetCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCaptureRoom(bool bInEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitCaptureTargetImage(UImage* InImage);
    
    UFUNCTION(BlueprintCallable)
    void FinishCapture();
    
private:
    UFUNCTION(BlueprintCallable)
    void CompletedTextureStreaming();
    
    UFUNCTION(BlueprintCallable)
    void AddCaptureTargetCamera(USceneCaptureComponent2D* InCaptureTargetCamera);
    
};

