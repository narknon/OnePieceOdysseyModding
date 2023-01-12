#pragma once
#include "CoreMinimal.h"
#include "KizokTextureFolderCompleteDelegate.h"
#include "TextureFolderActorInfo.h"
#include "TextureFolderObjectInfo.h"
#include "TextureFolderEnableInfo.h"
#include "GameFramework/Actor.h"
#include "KizokTextureFolder.generated.h"

class UObject;
class UTexture;

UCLASS(Blueprintable)
class KIZOK_API AKizokTextureFolder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureFolderActorInfo> Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureFolderObjectInfo> Objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LandscapeName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTextureFolderEnableInfo> NowEnableTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> NowEnableObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LandscapeObjects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokTextureFolderComplete OnComplete;
    
public:
    AKizokTextureFolder();
    UFUNCTION(BlueprintCallable)
    void SetTimeoutTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void RequestCompleteCheck(bool bInternal);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitingStreaming();
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedCompleteCheck();
    
    UFUNCTION(BlueprintCallable)
    void EnableObjects(const TArray<FName>& Names);
    
    UFUNCTION(BlueprintCallable)
    void EnableLandscape(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void Enable(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void DisableObjects(const TArray<FName>& Names);
    
    UFUNCTION(BlueprintCallable)
    void DisableLandscape(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void Disable(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void CheckLandscape();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBeginObjects(const TArray<FName>& Names, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBeginObject(const FName& Name, bool bEnable);
    
};

