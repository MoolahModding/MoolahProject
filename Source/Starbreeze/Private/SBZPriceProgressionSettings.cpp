#include "SBZPriceProgressionSettings.h"

TArray<FString> USBZPriceProgressionSettings::GetWeeklyResetPriceGroupSettings() {
    return TArray<FString>();
}

USBZPriceProgressionSettings::USBZPriceProgressionSettings() {
    this->WeeklyResetPriceGroups.AddDefaulted(3);
}

