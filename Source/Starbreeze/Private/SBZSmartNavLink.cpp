#include "SBZSmartNavLink.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

ASBZSmartNavLink::ASBZSmartNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
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


