#include "SBZPedestrianTrafficNavLink.h"
#include "SBZNavLinkWaitSlotRoot.h"

void ASBZPedestrianTrafficNavLink::SetTrafficAllowed(bool bAllowed) {
}

void ASBZPedestrianTrafficNavLink::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

ASBZPedestrianTrafficNavLink::ASBZPedestrianTrafficNavLink() {
    this->WaitSlots = CreateDefaultSubobject<USBZNavLinkWaitSlotRoot>(TEXT("WaitSlots"));
    this->HalfCrossingWidth = 140.00f;
    this->LaneCount = 4;
}

