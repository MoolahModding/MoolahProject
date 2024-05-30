#include "SBZDoor.h"

ASBZDoor::ASBZDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->NavLinkComponentArray.AddDefaulted(1);
}


