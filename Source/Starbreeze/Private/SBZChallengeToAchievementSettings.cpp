#include "SBZChallengeToAchievementSettings.h"

USBZChallengeToAchievementSettings::USBZChallengeToAchievementSettings() {
    this->AchievementObjectiveStatCodeArray.AddDefaulted(21);
}

TMap<FName, FName> USBZChallengeToAchievementSettings::GetChallengeToAchievementSettings() {
    return TMap<FName, FName>();
}

TArray<FName> USBZChallengeToAchievementSettings::GetAchievementObjectiveStatCodeArray() {
    return TArray<FName>();
}


