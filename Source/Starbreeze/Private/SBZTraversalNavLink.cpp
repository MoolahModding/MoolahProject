#include "SBZTraversalNavLink.h"
#include "SBZNavLinkTraversalComponent.h"

ASBZTraversalNavLink::ASBZTraversalNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCustomMove = true;
    this->NavLinkTraversalComponent = CreateDefaultSubobject<USBZNavLinkTraversalComponent>(TEXT("SBZNavLinkTraversalComponent"));
}


