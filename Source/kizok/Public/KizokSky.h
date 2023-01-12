#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "EKizokColorCurveName.h"
#include "EKizokFloatCurveName.h"
#include "KizokEnvironmentTexture.h"
#include "Curves/CurveLinearColor.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "KizokSky.generated.h"

class UKizokSkyDummyComponent;
class UEnlightenEnvironmentTextureComponent;
class UCurveLinearColor;
class UCurveFloat;
class UDirectionalLightComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokSky : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSkyDummyComponent* m_rootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EnvironmentIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokEnvironmentTexture> EnvironmentTexturesArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEnlightenEnvironmentTextureComponent*> EnvironmentTextureComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateDayCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool b24hCurves;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor CloudDarkColorKizokMirroredCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor CloudLightColorKizokMirorredCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor HorizonBaseColorKizokMirroredCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor SunColorKizokMirroredCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor ZenithBaseColorKizokMirroredCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor CumulonimbusColorKizokMirroredCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor CloudDarkColorKizok;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor CloudLightColorKizok;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor HorizonBaseColorKizok;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor SunColorKizok;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor ZenithBaseColorKizok;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor CumulonimbusColorKizok;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor TransitionTargetHorizonBaseColorKizokMirroredCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor TransitionTargetHorizonBaseColorKizok;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DirectionalIntensityKizok;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FogDensityMirroredCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FogDensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FogMaxOpacityMirroredCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FogMaxOpacityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FogStartDistanceMirroredCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FogStartDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve EnvironemtTextreMirroredCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve EnvironmentTextureCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor EnvironmentTextureColorMirroredCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor EnvironmentTextureColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OneColor;
    
    AKizokSky();
    UFUNCTION(BlueprintCallable)
    void SetTransitionTargetColorCurveAsset(EKizokColorCurveName Name, UCurveLinearColor* CurveAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatCurveAsset(EKizokFloatCurveName Name, UCurveFloat* CurveAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceFieldShadowEnableForCS(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceFieldShadowDistanceForCS(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void SetColorCurveAsset(EKizokColorCurveName Name, UCurveLinearColor* CurveAsset);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDirectionalLight(UDirectionalLightComponent* DirectionalLight);
    
    UFUNCTION(BlueprintCallable)
    void ProcessEnvironmentTextureMaps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveLinearColor* GetTransitionTargetColorCurveAsset(EKizokColorCurveName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRuntimeCurveFloat(const FRuntimeFloatCurve& Curve, float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveFloat* GetFloatCurveAsset(EKizokFloatCurveName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatCurve(EKizokFloatCurveName Name, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveLinearColor* GetColorCurveAsset(EKizokColorCurveName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColorCurve(EKizokColorCurveName Name, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustedTimeOfDay();
    
    UFUNCTION(BlueprintCallable)
    void FindEnvironmentTexturesAndLerpAlpha(float InTimeOfDay, bool& OutIsSuccess, UEnlightenEnvironmentTextureComponent*& OutEnvTexComponentA, UEnlightenEnvironmentTextureComponent*& OutEnvTexComponentB, float& OutLerpAlpha);
    
    UFUNCTION(BlueprintCallable)
    void CopyCurveAssetTransitionTargetToCurrent();
    
};

