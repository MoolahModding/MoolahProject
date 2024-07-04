#include "SBZRappellingRope.h"
#include "SBZRappellingRopeComponent.h"

ASBZRappellingRope::ASBZRappellingRope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USBZRappellingRopeComponent>(TEXT("SBZRappellingRopeComponent"));
    this->RappellingRopeComponent = (USBZRappellingRopeComponent*)RootComponent;
    this->RappellingRopeData = NULL;
}


