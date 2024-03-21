#include "SBZAgentManager.h"

void USBZAgentManager::ServerUnreliableRPC_Implementation(uint64 ClientId, const TArray<uint8>& Data) {
}
bool USBZAgentManager::ServerUnreliableRPC_Validate(uint64 ClientId, const TArray<uint8>& Data) {
    return true;
}

void USBZAgentManager::ServerReliableRPC_Implementation(uint64 ClientId, const TArray<uint8>& Data) {
}
bool USBZAgentManager::ServerReliableRPC_Validate(uint64 ClientId, const TArray<uint8>& Data) {
    return true;
}

void USBZAgentManager::HandshakeRPC_Implementation(const FString& Challenge) {
}
bool USBZAgentManager::HandshakeRPC_Validate(const FString& Challenge) {
    return true;
}

void USBZAgentManager::HandshakeReplyRPC_Implementation(const FString& Challenge, uint64 PrivateId) {
}

void USBZAgentManager::HandleNavDataRegistered(ANavigationData* NavData) {
}

void USBZAgentManager::ClientUnreliableRPC_Implementation(const TArray<uint8>& Data) {
}

void USBZAgentManager::ClientReliableRPC_Implementation(const TArray<uint8>& Data) {
}

void USBZAgentManager::ClientInitializedRPC_Implementation(uint64 ClientId) {
}
bool USBZAgentManager::ClientInitializedRPC_Validate(uint64 ClientId) {
    return true;
}

USBZAgentManager::USBZAgentManager() {
}

