#include "SBZFirstPersonCameraAttachment.h"

USBZFirstPersonCameraAttachment::USBZFirstPersonCameraAttachment() {
    this->CameraSocket = TEXT("RootCamSocket");
    this->SightSocket = TEXT("L_Sight");
    this->OwningCharacter = NULL;
    this->EquippedWeaponData = NULL;
    this->EquippedWeapon = NULL;
    this->EquippedWeaponSightData = NULL;
    this->EquippedTargetingData = NULL;
}


