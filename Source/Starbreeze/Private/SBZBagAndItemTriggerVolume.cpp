#include "SBZBagAndItemTriggerVolume.h"

ASBZBagAndItemTriggerVolume::ASBZBagAndItemTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bIsVolumeEnabledInitially = false;
    this->bIsVolumeEnabled = false;
    this->bIsDisabledWhenTriggered = true;
}

void ASBZBagAndItemTriggerVolume::SetVolumeEnabled(bool bIsEnabled) {
}


