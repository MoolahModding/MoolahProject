#include "SBZActorPoolManager.h"
#include "Templates/SubclassOf.h"

void USBZActorPoolManager::ReturnActor(AActor* Actor, float Delay) {
}

void USBZActorPoolManager::OnExitedActionPhase() {
}

void USBZActorPoolManager::OnActorDestroyed(AActor* DestroyedActor) {
}

void USBZActorPoolManager::InitPool(UWorld* World, TSubclassOf<AActor> ActorClass, int32 Count) {
}

AActor* USBZActorPoolManager::GetActor(UWorld* World, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

USBZActorPoolManager* USBZActorPoolManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

USBZActorPoolManager::USBZActorPoolManager() {
}

