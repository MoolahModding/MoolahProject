#include "SBZChallengeToAchievementSettings.h"

USBZChallengeToAchievementSettings::USBZChallengeToAchievementSettings() {
    this->AchievementObjectiveStatCodeArray.AddDefaulted(32);
}

TMap<FName, FName> USBZChallengeToAchievementSettings::GetChallengeToAchievementSettings() {
    return TMap<FName, FName>();
}

TArray<FName> USBZChallengeToAchievementSettings::GetAchievementObjectiveStatCodeArray() {
    return TArray<FName>();
}


