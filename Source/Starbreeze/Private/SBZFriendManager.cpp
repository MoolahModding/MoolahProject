#include "SBZFriendManager.h"

void USBZFriendManager::OnUnblockPlayerComplete(bool bResult, FSBZFriendListEntry PlayerEntry) {
}

void USBZFriendManager::OnPlatformUserInitialized() {
}

void USBZFriendManager::OnBlockPlayerComplete(bool bResult, FSBZFriendListEntry PlayerEntry) {
}

void USBZFriendManager::OnBlockedPlayerChanged() {
}

bool USBZFriendManager::IsPlayingOnSamePlatform(const FSBZFriendListEntry& FriendEntry) const {
    return false;
}

bool USBZFriendManager::IsCrossplayAllowed() const {
    return false;
}

void USBZFriendManager::HandleUIStackChanged(FSBZUIStackChangedEvent Event) {
}

void USBZFriendManager::HandleStateEntered(FName StateName) {
}

TMap<FString, FSBZFriendListEntry> USBZFriendManager::GetUserSearchEntries() {
    return TMap<FString, FSBZFriendListEntry>();
}

TMap<FString, FSBZFriendListEntry> USBZFriendManager::GetPlatformFriendEntries() {
    return TMap<FString, FSBZFriendListEntry>();
}

TMap<FString, FSBZFriendListEntry> USBZFriendManager::GetOutgoingFriendRequests() {
    return TMap<FString, FSBZFriendListEntry>();
}

TMap<FString, FSBZFriendListEntry> USBZFriendManager::GetOfflineFriendEntries() {
    return TMap<FString, FSBZFriendListEntry>();
}

TMap<FString, FSBZFriendListEntry> USBZFriendManager::GetIncomingFriendRequests() {
    return TMap<FString, FSBZFriendListEntry>();
}

USBZFriendManager* USBZFriendManager::GetFriendManager(const UObject* WorldContextObject) {
    return NULL;
}

TMap<FString, FSBZFriendListEntry> USBZFriendManager::GetBlockedPlayerEntries() {
    return TMap<FString, FSBZFriendListEntry>();
}

TMap<FString, FSBZFriendListEntry> USBZFriendManager::GetAccelByteFriendEntries() {
    return TMap<FString, FSBZFriendListEntry>();
}

USBZFriendManager::USBZFriendManager() {
}

