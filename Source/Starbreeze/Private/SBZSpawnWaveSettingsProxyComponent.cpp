#include "SBZSpawnWaveSettingsProxyComponent.h"

USBZSpawnWaveSettingsProxyComponent::USBZSpawnWaveSettingsProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bClearCountTypeOnAssigned = true;
    this->bClearCountTypeOnUnassigned = false;
}


