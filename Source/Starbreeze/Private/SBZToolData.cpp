#include "SBZToolData.h"

USBZToolData::USBZToolData() {
    this->PrimaryToolAnimCollection = NULL;
    this->PlaceableToolAnimCollection = NULL;
    this->SpawnOffsetFromCamera = 25.00f;
    this->ToolInventoryMax = 5;
    this->ToolInventory = 5;
    this->PrimaryToolAmmoInventoryMax = 2000;
    this->PrimaryToolAmmoInventory = 2000;
    this->PrimaryAbilityClass = NULL;
    this->PlaceableAbilityClass = NULL;
    this->bActivateImmediately = false;
    this->AutoDeactivateTimer = 0.50f;
    this->bIsCameraLockedWhenActive = false;
    this->ToolRepeatDelay = 0.30f;
    this->bUsesPrimaryToolAmmo = true;
    this->bRequiresViewing = false;
    this->ViewDistanceOffset = 3.00f;
    this->bIsClippingAllowed = true;
    this->SurfaceOffset = 0.00f;
}

