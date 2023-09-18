#include "SBZBagManager.h"
#include "Net/UnrealNetwork.h"

USBZBagManager::USBZBagManager() : UActorComponent(FObjectInitializer::Get()) {
    
}

bool USBZBagManager::TryRemoveClaim(FSBZBagHandle Handle, AActor* Actor) {
    return false;
}

bool USBZBagManager::SecureBag(FSBZBagHandle Handle, bool bClearClaim) {
    return false;
}

bool USBZBagManager::RemoveClaim(FSBZBagHandle Handle, AActor* Actor) {
    return false;
}

void USBZBagManager::Multicast_SecureBag_Implementation(const int32 BagId, const bool bClearClaim) {
}

void USBZBagManager::Multicast_RemoveClaim_Implementation(const int32 BagId) {
}

void USBZBagManager::Multicast_RemoveBag_Implementation(const int32 BagId) {
}

void USBZBagManager::Multicast_CreateBag_Implementation(const int32 BagId, const USBZBagType* BagType) {
}

void USBZBagManager::Multicast_ClaimBag_Implementation(const int32 BagId, AActor* Actor) {
}

bool USBZBagManager::IsValidHandle(const FSBZBagHandle& Handle) const {
    return false;
}

FSBZBagPersistentData USBZBagManager::GetValidBagData(FSBZBagHandle Handle) const {
    return FSBZBagPersistentData{};
}

USBZBagManager* USBZBagManager::Get(UObject* WorldContextObject) {
    return NULL;
}

FSBZBagHandle USBZBagManager::CreateBag(const USBZBagType* BagType) {
    return FSBZBagHandle{};
}

bool USBZBagManager::ClaimBag(FSBZBagHandle Handle, AActor* Actor) {
    return false;
}

void USBZBagManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZBagManager, Bags);
}


