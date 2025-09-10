#include "SBZAnalyticsManager.h"

USBZAnalyticsManager::USBZAnalyticsManager() {
    this->LastScreenUpdate = 0.00f;
    this->HeartbeatWorldContextObject = NULL;
}

void USBZAnalyticsManager::SendVendorWeaponsInfamy(const UObject* WorldContextObject, const ESBZWeaponInfamyEventType WeaponInfamyEvent, const TMap<FString, FSBZWeaponStoreItem>& WeaponMap) {
}

void USBZAnalyticsManager::SendSyncDLC(const bool bIsSyncDLCSuccessful, const FString& SyncDLCFailureMessage) {
}

void USBZAnalyticsManager::SendStayAsPartySelected(const bool bIsPartyLeader) {
}

void USBZAnalyticsManager::SendNotOwningHeistDetected(const FString& AccelByteUserId, const ESBZNotOwningHeistPolicyType NotOwningHeistAction, const bool bIsActionSuccessful, const FString& Description, const FString& AdditionalInformation) {
}

void USBZAnalyticsManager::SendInfamyChanged(const int32 NewInfamyExperience, const int32 PreviousInfamyExperience, const int32 NewRenownLevel, const int32 PreviousRenownLevel) {
}

void USBZAnalyticsManager::SendEntitlementsLoadedEvent(const FSBZEntitlementsTelemetryPayload& Payload) {
}

void USBZAnalyticsManager::SendCheaterDetected(const ESBZCheaterPolicyType AntiCheatAction, const bool bIsCheatActionSuccessful, const FString& CheatTypeString, const FString& AdditionalInformation) {
}

void USBZAnalyticsManager::SendChallengeCompleted(const FSBZChallengeData& ChallengeData) {
}


