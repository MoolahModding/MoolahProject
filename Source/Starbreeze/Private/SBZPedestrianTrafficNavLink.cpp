#include "SBZPedestrianTrafficNavLink.h"
#include "SBZNavLinkWaitSlotRoot.h"

ASBZPedestrianTrafficNavLink::ASBZPedestrianTrafficNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaitSlots = CreateDefaultSubobject<USBZNavLinkWaitSlotRoot>(TEXT("WaitSlots"));
    this->WaitSlots->SetupAttachment(RootComponent);
    this->HalfCrossingWidth = 140.00f;
    this->LaneCount = 4;
    this->bDisableNavLinkWhenUsed = false;
    this->bCanBeBlocked = false;
    this->bCustomMove = true;
}

void ASBZPedestrianTrafficNavLink::SetTrafficAllowed(bool bAllowed) {
}

void ASBZPedestrianTrafficNavLink::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}


