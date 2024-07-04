#include "SBZPlayerAndItemTriggerVolume.h"

ASBZPlayerAndItemTriggerVolume::ASBZPlayerAndItemTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->LastOverlapActor = NULL;
    this->bIsVolumeEnabledInitially = false;
    this->bIsVolumeEnabled = false;
    this->bIsEnabledOnAlarm = true;
    this->bIsDisabledOnEmpty = true;
    this->bIsDisabledOnEmptyInitially = true;
    this->bIsBagsTeleported = true;
    this->bIsClosedOffWhenDisabled = true;
}

void ASBZPlayerAndItemTriggerVolume::SetVolumeEnabled(bool bIsEnabled) {
}


