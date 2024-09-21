#include "SBZDialogDataAsset.h"

USBZDialogDataAsset::USBZDialogDataAsset() {
    this->DialogType = ESBZDialogType::Mission;
    this->Priority = 0;
    this->bSkipFirstDelay = true;
    this->bIsDeadAllowed = false;
    this->bIsHumanShieldVictimAllowed = false;
    this->bIsHostageAllowed = false;
}


