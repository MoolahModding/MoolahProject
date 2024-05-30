#include "SBZRoomConnectorComponent.h"

USBZRoomConnectorComponent::USBZRoomConnectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAIBreachable = false;
    this->InitialSoundModifier = 100.00f;
    this->RoomA = NULL;
    this->RoomB = NULL;
    this->RoomCheckDistance = 10.00f;
    this->bIsUsedForRoomPathing = false;
}

void USBZRoomConnectorComponent::SetSoundModifier(float InSoundModifier) {
}

void USBZRoomConnectorComponent::SetRoomConnectorEnabled(bool bInIsEnabled) {
}



void USBZRoomConnectorComponent::BlockSoundCompletly() {
}

void USBZRoomConnectorComponent::AllowSoundToPassUnmodified() {
}


