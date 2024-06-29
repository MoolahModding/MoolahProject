#include "SBZBTService_WeaponSelector.h"

USBZBTService_WeaponSelector::USBZBTService_WeaponSelector() {
    this->NodeName = TEXT("WeaponSelector");
    this->EquipCooldown = 10.00f;
    this->MinFailedAttackDistance = 150.00f;
    this->TrackedTaskEquippableIndex = -1;
}


