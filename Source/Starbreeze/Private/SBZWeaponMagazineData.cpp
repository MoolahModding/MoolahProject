#include "SBZWeaponMagazineData.h"

USBZWeaponMagazineData::USBZWeaponMagazineData() {
    this->AmmoLoadedMax = 10;
    this->AmmoLoaded = 10;
    this->AmmoPerReload = 10;
    this->AmmoInventoryMax = 100;
    this->AmmoInventory = 100;
    this->AmmoVisibilityType = ESBZWeaponAmmoVisibilityType::Never;
}


