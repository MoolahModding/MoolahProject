#include "SBZAIOrder_SecurityRoom.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_SecurityRoom::USBZAIOrder_SecurityRoom() {
    this->SecurityRoom = NULL;
    this->OwnerController = NULL;
    this->SecurityRoomVolume = NULL;
    this->bIsInstanced = false;
    this->Category = ESBZAIBehaviorCategory::Idle;
}

void USBZAIOrder_SecurityRoom::OnSecurityRoomVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void USBZAIOrder_SecurityRoom::OnPaused(const FString& Reason) {
}

void USBZAIOrder_SecurityRoom::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void USBZAIOrder_SecurityRoom::ClearDelegates() {
}


