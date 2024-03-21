#include "SBZSmartNavLink.h"
#include "Templates/SubclassOf.h"

void ASBZSmartNavLink::SetNavArea(TSubclassOf<UNavArea> AreaClass) {
}

void ASBZSmartNavLink::SetLinkEnabled(bool bInLinkEnabled) {
}

bool ASBZSmartNavLink::IsLinkEnabled() const {
    return false;
}

TSubclassOf<UNavArea> ASBZSmartNavLink::GetNavArea() const {
    return NULL;
}

ASBZSmartNavLink::ASBZSmartNavLink() {
    this->bDisableNavLinkWhenUsed = true;
    this->bCanBeBlocked = true;
    this->NavLinkUserId = 0;
    this->bCustomMove = false;
    this->bLinkEnabled = true;
    this->bLinkBlocked = false;
    this->bLinkInUse = false;
    this->AllowedBlockingCharacter = NULL;
    this->AllowedBlockingController = NULL;
    this->SpriteComponent = NULL;
}

