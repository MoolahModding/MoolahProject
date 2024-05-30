#include "SBZFirstPersonCameraAttachment.h"

USBZFirstPersonCameraAttachment::USBZFirstPersonCameraAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSocket = TEXT("RootCamSocket");
    this->SightSocket = TEXT("L_Sight");
    this->PitchLookEaseTime = 0.25f;
    this->OwningCharacter = NULL;
    this->EquippedWeaponData = NULL;
    this->EquippedWeapon = NULL;
    this->EquippedWeaponSightData = NULL;
    this->EquippedTargetingData = NULL;
}


