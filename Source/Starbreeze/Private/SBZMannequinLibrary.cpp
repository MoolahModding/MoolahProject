#include "SBZMannequinLibrary.h"

USBZMannequinLibrary::USBZMannequinLibrary() {
}

void USBZMannequinLibrary::SetMainMenuMannequinPose(const UObject* WorldContextObject, UAnimSequenceBase* Pose) {
}

void USBZMannequinLibrary::SetMainMenuMannequinLoadout(const UObject* WorldContextObject, const FSBZEquippableConfig& EquippableConfig) {
}

void USBZMannequinLibrary::SetMainMenuMannequinEquipment(const UObject* WorldContextObject, const ESBZInventoryEquipmentType EquipmentType) {
}

void USBZMannequinLibrary::RefreshMainMenuMannequin(const UObject* WorldContextObject, const ESBZInventoryEquipmentType EquipmentType) {
}

ASBZMainMenuPlayerCharacter* USBZMannequinLibrary::GetMultiplayerMannequin(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ASBZMainMenuPlayerCharacter* USBZMannequinLibrary::GetMainMenuMannequin(const UObject* WorldContextObject) {
    return NULL;
}


