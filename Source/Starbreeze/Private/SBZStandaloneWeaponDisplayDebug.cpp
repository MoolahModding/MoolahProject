#include "SBZStandaloneWeaponDisplayDebug.h"

ASBZStandaloneWeaponDisplayDebug::ASBZStandaloneWeaponDisplayDebug(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponPreset = NULL;
    this->WeaponData = NULL;
    this->bForceWithoutPivotPoint = true;
}

void ASBZStandaloneWeaponDisplayDebug::Setup() {
}


