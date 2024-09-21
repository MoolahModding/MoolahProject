#include "SBZRecoilComponent.h"

USBZRecoilComponent::USBZRecoilComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCharacter = NULL;
    this->CurrentWeapon = NULL;
    this->CurrentRecoilData = NULL;
}


