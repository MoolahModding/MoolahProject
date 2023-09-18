#include "SBZActorPoolManager.h"

USBZActorPoolManager::USBZActorPoolManager() {
}

void USBZActorPoolManager::ReturnActor(AActor* Actor, float Delay) {
}

void USBZActorPoolManager::OnExitedActionPhase() {
}

void USBZActorPoolManager::OnActorDestroyed(AActor* DestroyedActor) {
}

void USBZActorPoolManager::InitPool(UWorld* World, UClass* ActorClass, int32 Count) {
}

AActor* USBZActorPoolManager::GetActor(UWorld* World, UClass* ActorClass) {
    return NULL;
}

USBZActorPoolManager* USBZActorPoolManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


