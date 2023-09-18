#include "SBZDoor.h"

ASBZDoor::ASBZDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavLinkComponentArray.AddDefaulted(1);
    this->Tags.AddDefaulted(1);
}


