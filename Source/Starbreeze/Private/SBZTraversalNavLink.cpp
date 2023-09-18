#include "SBZTraversalNavLink.h"
#include "SBZNavLinkTraversalComponent.h"

ASBZTraversalNavLink::ASBZTraversalNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavLinkTraversalComponent = CreateDefaultSubobject<USBZNavLinkTraversalComponent>(TEXT("SBZNavLinkTraversalComponent"));
    this->bCustomMove = true;
}


