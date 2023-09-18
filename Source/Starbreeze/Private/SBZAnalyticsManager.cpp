#include "SBZAnalyticsManager.h"

USBZAnalyticsManager::USBZAnalyticsManager() {
    this->AnalyticsProvider = NULL;
    this->LastScreenUpdate = 0.00f;
    this->HeartbeatWorldContextObject = NULL;
}

void USBZAnalyticsManager::SendInfamyChanged(USBZInfamyManager* InfamyManager, int32 NewInfamyExperience, int32 PreviousInfamyExperience) {
}

void USBZAnalyticsManager::SendChallengeCompleted(const FSBZChallengeData& ChallengeData) {
}


