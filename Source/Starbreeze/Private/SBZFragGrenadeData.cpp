#include "SBZFragGrenadeData.h"

USBZFragGrenadeData::USBZFragGrenadeData() {
    this->DamageGameplayEffectClass = NULL;
    this->DamageTypeClass = NULL;
    this->FriendlyPlayerDamageScale = 0.25f;
    this->bUseInstigatorPlayerDamageScale = false;
    this->InstigatorPlayerDamageScale = 1.00f;
    this->ClusterDelay = 0.65f;
    this->RandomAdditionalClusterDelay = 0.25f;
    this->ClusterGrenadeSpawnDegrees = 40.00f;
}


