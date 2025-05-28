#include "SBZSharedWeaponParentLock.h"

FSBZSharedWeaponParentLock::FSBZSharedWeaponParentLock() {
    this->UnlockWeaponRequiredLevel = 0;
    this->UnlockWeaponCurrentLevel = 0;
    this->bIsLockedByOtherWeapon = false;
}

