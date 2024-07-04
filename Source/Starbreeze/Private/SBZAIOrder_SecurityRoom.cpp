#include "SBZAIOrder_SecurityRoom.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_SecurityRoom::USBZAIOrder_SecurityRoom() {
    this->bIsPersistent = true;
    this->Category = ESBZAIBehaviorCategory::Idle;
    this->SecurityRoom = NULL;
    this->OwnerController = NULL;
    this->SecurityRoomVolume = NULL;
}

void USBZAIOrder_SecurityRoom::OnPausedFunc(const FName& Reason) {
}

void USBZAIOrder_SecurityRoom::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}


