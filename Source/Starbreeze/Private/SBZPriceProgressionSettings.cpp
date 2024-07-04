#include "SBZPriceProgressionSettings.h"

USBZPriceProgressionSettings::USBZPriceProgressionSettings() {
    this->WeeklyResetPriceGroups.AddDefaulted(3);
}

TArray<FString> USBZPriceProgressionSettings::GetWeeklyResetPriceGroupSettings() {
    return TArray<FString>();
}


