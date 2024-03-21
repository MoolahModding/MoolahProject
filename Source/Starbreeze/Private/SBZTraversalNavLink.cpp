#include "SBZTraversalNavLink.h"
#include "SBZNavLinkTraversalComponent.h"

ASBZTraversalNavLink::ASBZTraversalNavLink() {
    this->NavLinkTraversalComponent = CreateDefaultSubobject<USBZNavLinkTraversalComponent>(TEXT("SBZNavLinkTraversalComponent"));
}

