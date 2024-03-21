#include "SBZAnalyticsManager.h"

void USBZAnalyticsManager::SendSyncDLC(const bool bIsSyncDLCSuccessful, const FString& SyncDLCFailureMessage) {
}

void USBZAnalyticsManager::SendNotOwningHeistDetected(const ESBZNotOwningHeistPolicyType NotOwningHeistAction, const bool bIsActionSuccessful, const FString& Description, const FString& AdditionalInformation) {
}

void USBZAnalyticsManager::SendInfamyChanged(USBZInfamyManager* InfamyManager, int32 NewInfamyExperience, int32 PreviousInfamyExperience) {
}

void USBZAnalyticsManager::SendCheaterDetected(const ESBZCheaterPolicyType AntiCheatAction, const bool bIsCheatActionSuccessful, const FString& CheatTypeString, const FString& AdditionalInformation) {
}

void USBZAnalyticsManager::SendChallengeCompleted(const FSBZChallengeData& ChallengeData) {
}

USBZAnalyticsManager::USBZAnalyticsManager() {
    this->AnalyticsProvider = NULL;
    this->LastScreenUpdate = 0.00f;
    this->HeartbeatWorldContextObject = NULL;
}

