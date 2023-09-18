#include "SBZWindow.h"
#include "ESBZGateState.h"

ASBZWindow::ASBZWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialState = ESBZGateState::Locked;
    this->NavLinkComponentArray.AddDefaulted(1);
    this->NavLinkAgilityComponentArray.AddDefaulted(1);
    this->bIsOpenFromFrontAllowed = false;
    this->bIsOnlyTraversedWhenAlerted = true;
    this->bIsSliding = true;
    this->bUseBreachPOIandSound = true;
    this->Tags.AddDefaulted(1);
}


