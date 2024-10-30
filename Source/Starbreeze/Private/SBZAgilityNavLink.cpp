#include "SBZAgilityNavLink.h"
#include "SBZNavLinkAgilityComponent.h"

ASBZAgilityNavLink::ASBZAgilityNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCustomMove = true;
    this->LeftRoom = NULL;
    this->RightRoom = NULL;
    this->NavLinkAgilityComponent = CreateDefaultSubobject<USBZNavLinkAgilityComponent>(TEXT("SBZNavLinkAgilityComponent"));
    this->bIsHeistStateDependant = false;
    this->AllowedHeistStates = 0;
}


