#include "SBZChallengeToAchievementSettings.h"

TMap<FName, FName> USBZChallengeToAchievementSettings::GetChallengeToAchievementSettings() {
    return TMap<FName, FName>();
}

TArray<FName> USBZChallengeToAchievementSettings::GetAchievementObjectiveStatCodeArray() {
    return TArray<FName>();
}

USBZChallengeToAchievementSettings::USBZChallengeToAchievementSettings() {
    this->AchievementObjectiveStatCodeArray.AddDefaulted(22);
}

