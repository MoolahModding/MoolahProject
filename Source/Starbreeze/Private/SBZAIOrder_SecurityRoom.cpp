#include "SBZAIOrder_SecurityRoom.h"

void USBZAIOrder_SecurityRoom::OnPausedFunc(const FName& Reason) {
}

void USBZAIOrder_SecurityRoom::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

USBZAIOrder_SecurityRoom::USBZAIOrder_SecurityRoom() {
    this->SecurityRoom = NULL;
    this->OwnerController = NULL;
    this->SecurityRoomVolume = NULL;
}

