#include "SBZWindow.h"
#include "ESBZGateState.h"

ASBZWindow::ASBZWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->InitialState = ESBZGateState::Locked;
    this->NavLinkComponentArray.AddDefaulted(1);
    this->NavLinkAgilityComponentArray.AddDefaulted(1);
    this->bIsOpenFromFrontAllowed = false;
    this->bIsSliding = true;
    this->bUseBreachPOIandSound = true;
}


