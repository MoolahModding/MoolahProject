#include "SBZPlayerAndItemTriggerVolume.h"

void ASBZPlayerAndItemTriggerVolume::SetVolumeEnabled(bool bIsEnabled) {
}

ASBZPlayerAndItemTriggerVolume::ASBZPlayerAndItemTriggerVolume() {
    this->LastOverlapActor = NULL;
    this->bIsVolumeEnabledInitially = false;
    this->bIsVolumeEnabled = false;
    this->bIsEnabledOnAlarm = true;
    this->bIsDisabledOnEmpty = true;
    this->bIsDisabledOnEmptyInitially = true;
    this->bIsBagsTeleported = true;
    this->bIsClosedOffWhenDisabled = true;
}

