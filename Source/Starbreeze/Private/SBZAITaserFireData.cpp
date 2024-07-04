#include "SBZAITaserFireData.h"

USBZAITaserFireData::USBZAITaserFireData() {
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    this->DamageInterval[0] = 0.00f;
    this->DamageInterval[1] = 0.00f;
    this->DamageInterval[2] = 0.00f;
    this->DamageInterval[3] = 0.00f;
}


