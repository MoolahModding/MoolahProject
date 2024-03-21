#include "SBZInfamyManager.h"

void USBZInfamyManager::HandleOnStateMachineStateEntered(FName StateName) {
}

int32 USBZInfamyManager::GetMaxLevel() const {
    return 0;
}

int32 USBZInfamyManager::GetLevelForExperience(const int32 InExperience) const {
    return 0;
}

USBZInfamyManager* USBZInfamyManager::GetInfamyManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 USBZInfamyManager::GetExperienceForLevel(const int32 InLevel) const {
    return 0;
}

void USBZInfamyManager::ClientGetProgressInfo(int32& OutProgressTowardsNextLevelUp, int32& OutPointsRequiredForNextLevelUp) {
}

int32 USBZInfamyManager::ClientGetPreviousExperience() const {
    return 0;
}

int32 USBZInfamyManager::ClientGetPreMatchExperience() const {
    return 0;
}

int32 USBZInfamyManager::ClientGetCurrentRenownLevel() const {
    return 0;
}

int32 USBZInfamyManager::ClientGetCurrentLevel() const {
    return 0;
}

int32 USBZInfamyManager::ClientGetCurrentExperience() const {
    return 0;
}

USBZInfamyManager::USBZInfamyManager() {
}

