#include "SBZChallengeManager.h"

USBZChallengeManager::USBZChallengeManager() {
    this->LocalizationOverrides = NULL;
    this->InfamyPointRewardStatID = TEXT("infamy-point");
    this->ChallengesStringTable = NULL;
    this->ChallengesStatsStringTable = NULL;
}

void USBZChallengeManager::RefreshChallengeRecordCache() {
}

void USBZChallengeManager::HandlePlatformUserChanged(int32 OldUserIndex) {
}

void USBZChallengeManager::HandleOnStateMachineStateEntered(FName StateName) {
}

int32 USBZChallengeManager::GetStatProgress(const FName& InStatID) {
    return 0;
}

TArray<FSBZChallengeData> USBZChallengeManager::GetCompletedChallengesDuringMission() const {
    return TArray<FSBZChallengeData>();
}

FText USBZChallengeManager::GetChallengeStatObjectiveText(const UObject* WorldContextObject, const FSBZChallengeData& Challenge, const FSBZChallengeProgressStat& ChallengeStat) {
    return FText::GetEmpty();
}

FText USBZChallengeManager::GetChallengeStatNameText(const UObject* WorldContextObject, const FSBZChallengeProgressStat& ChallengeStat) {
    return FText::GetEmpty();
}

FText USBZChallengeManager::GetChallengeStatDescriptionText(const UObject* WorldContextObject, const FSBZChallengeProgressStat& ChallengeStat) {
    return FText::GetEmpty();
}

FText USBZChallengeManager::GetChallengeNameText(const FSBZChallengeData& Challenge) {
    return FText::GetEmpty();
}

USBZChallengeManager* USBZChallengeManager::GetChallengeManager(const UObject* WorldContextObject) {
    return NULL;
}

FText USBZChallengeManager::GetChallengeDescriptionText(const FSBZChallengeData& Challenge) {
    return FText::GetEmpty();
}


