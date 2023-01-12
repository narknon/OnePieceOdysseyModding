#include "KizokDLCAsyncClassAssetLoader.h"

class UObject;
class UKizokDLCAsyncClassAssetLoader;

UKizokDLCAsyncClassAssetLoader* UKizokDLCAsyncClassAssetLoader::AsyncLoadDLCClassFromSoftClassPtr(UObject* WorldContextObject, TSoftClassPtr<UObject> NewClassPtr) {
    return NULL;
}

UKizokDLCAsyncClassAssetLoader* UKizokDLCAsyncClassAssetLoader::AsyncLoadDLCClassFromClass(UObject* WorldContextObject, UClass* NewClassObject) {
    return NULL;
}

UKizokDLCAsyncClassAssetLoader::UKizokDLCAsyncClassAssetLoader() {
    this->classObject = NULL;
    this->LoadClassObject = NULL;
}

