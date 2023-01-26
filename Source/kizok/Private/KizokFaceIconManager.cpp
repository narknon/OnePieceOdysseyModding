#include "KizokFaceIconManager.h"


UTexture* UKizokFaceIconManager::GetFaceIconTexture(const FName InFaceId) {
    return NULL;
}

void UKizokFaceIconManager::AsyncFaceIconLoadToMaterial(const FName InFaceId, UMaterialInstanceDynamic* InMaterial, FName InParameterName, bool bInVisibleLoaded, UImage* InImage) {
}

void UKizokFaceIconManager::AsyncFaceIconLoadToImage(const FName InFaceId, UImage* InImage, bool bInMatchSize, bool bInVisibleLoaded) {
}

UKizokFaceIconManager::UKizokFaceIconManager() {
    this->ErrorTexture = NULL;
}

