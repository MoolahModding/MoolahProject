#include "SBZStandaloneWeaponDisplayDebug.h"

ASBZStandaloneWeaponDisplayDebug::ASBZStandaloneWeaponDisplayDebug(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceWithoutPivotPoint = true;
    this->WeaponPreset = NULL;
    this->WeaponData = NULL;
}

void ASBZStandaloneWeaponDisplayDebug::Setup() {
}


