#include "SBZPartyMemberDataManager.h"

USBZPartyMemberDataManager::USBZPartyMemberDataManager() {
}

void USBZPartyMemberDataManager::ResendPlayerLoadoutRequest() {
}

void USBZPartyMemberDataManager::OnSaveCurrentLoadoutSuccess() {
}

void USBZPartyMemberDataManager::OnSaveCurrentLoadoutFailed(int32 Code, const FString& Message) {
}

void USBZPartyMemberDataManager::OnPartyControlMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message, const FString& RoomId) {
}

void USBZPartyMemberDataManager::OnLoadPlayerLoadoutSuccess(const FAccelByteModelsUserRecord& ModelsUserRecord) {
}

void USBZPartyMemberDataManager::OnLoadPlayerLoadoutFailed(int32 Code, const FString& Message) {
}

void USBZPartyMemberDataManager::OnChatDisconnected() {
}

USBZPartyMemberDataManager* USBZPartyMemberDataManager::GetPartyMemberDataManager(const UObject* WorldContextObject) {
    return NULL;
}


