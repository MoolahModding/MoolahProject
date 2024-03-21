#include "SBZAgilityNavLink.h"
#include "SBZNavLinkAgilityComponent.h"

ASBZAgilityNavLink::ASBZAgilityNavLink() {
    this->LeftRoom = NULL;
    this->RightRoom = NULL;
    this->NavLinkAgilityComponent = CreateDefaultSubobject<USBZNavLinkAgilityComponent>(TEXT("SBZNavLinkAgilityComponent"));
}

