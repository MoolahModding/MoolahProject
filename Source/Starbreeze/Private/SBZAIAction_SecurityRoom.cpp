#include "SBZAIAction_SecurityRoom.h"

USBZAIAction_SecurityRoom::USBZAIAction_SecurityRoom() {
    this->bIsInstanced = false;
    this->bShouldDisableAI = true;
    this->SecurityRoom = NULL;
    this->OwnerController = NULL;
    this->SecurityRoomVolume = NULL;
}

void USBZAIAction_SecurityRoom::OnSecurityRoomVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void USBZAIAction_SecurityRoom::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void USBZAIAction_SecurityRoom::ClearDelegates() {
}


