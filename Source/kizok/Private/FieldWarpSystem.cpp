#include "FieldWarpSystem.h"

class UFieldAsyncTask;
class IFieldAsyncTask;
class AKizokFieldPlayerBase;

void UFieldWarpSystem::RemoveSystemInitializationTask(const TScriptInterface<IFieldAsyncTask> task) {
}

void UFieldWarpSystem::RemovePostWarpTask(const TScriptInterface<IFieldAsyncTask> task) {
}

bool UFieldWarpSystem::BeginWarp(AKizokFieldPlayerBase* refPlayer, const FVector& DstLocation, const FRotator& DstRotation, bool bResetCamera) {
    return false;
}

void UFieldWarpSystem::AddSystemInitializationTask(const TScriptInterface<IFieldAsyncTask> task, const EFieldAsyncTaskListType listType) {
}

void UFieldWarpSystem::AddPostWarpTask(const TScriptInterface<IFieldAsyncTask> task, const EFieldAsyncTaskListType listType) {
}

UFieldWarpSystem::UFieldWarpSystem() {
}

