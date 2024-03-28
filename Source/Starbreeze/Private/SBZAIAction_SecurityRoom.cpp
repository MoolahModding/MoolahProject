#include "SBZAIAction_SecurityRoom.h"

void USBZAIAction_SecurityRoom::OnSecurityRoomVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void USBZAIAction_SecurityRoom::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void USBZAIAction_SecurityRoom::ClearDelegates() {
}

USBZAIAction_SecurityRoom::USBZAIAction_SecurityRoom() {
    this->SecurityRoom = NULL;
    this->OwnerController = NULL;
    this->SecurityRoomVolume = NULL;
}

