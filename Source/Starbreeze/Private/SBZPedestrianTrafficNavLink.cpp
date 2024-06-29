#include "SBZPedestrianTrafficNavLink.h"
#include "SBZNavLinkWaitSlotRoot.h"

ASBZPedestrianTrafficNavLink::ASBZPedestrianTrafficNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableNavLinkWhenUsed = false;
    this->bCanBeBlocked = false;
    this->bCustomMove = true;
    this->WaitSlots = CreateDefaultSubobject<USBZNavLinkWaitSlotRoot>(TEXT("WaitSlots"));
    this->HalfCrossingWidth = 140.00f;
    this->LaneCount = 4;
    this->WaitSlots->SetupAttachment(RootComponent);
}

void ASBZPedestrianTrafficNavLink::SetTrafficAllowed(bool bAllowed) {
}

void ASBZPedestrianTrafficNavLink::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}


