#include "SBZCheaterHandlingSettings.h"

FSBZCheaterHandlingSettings::FSBZCheaterHandlingSettings() {
    this->CheaterPolicy = ESBZCheaterPolicyType::NoAction;
    this->NotOwningHeistPolicyType = ESBZNotOwningHeistPolicyType::NoAction;
    this->BanPeriodInDays = 0;
}

