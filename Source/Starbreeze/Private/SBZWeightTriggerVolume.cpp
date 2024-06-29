#include "SBZWeightTriggerVolume.h"

ASBZWeightTriggerVolume::ASBZWeightTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bStartEnabled = false;
    this->WeightLimit = 2;
}

void ASBZWeightTriggerVolume::SetVolumeEnabled(bool bIsEnabled) {
}


