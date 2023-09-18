#include "SBZRappellingRope.h"
#include "SBZRappellingRopeComponent.h"

ASBZRappellingRope::ASBZRappellingRope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RappellingRopeComponent = CreateDefaultSubobject<USBZRappellingRopeComponent>(TEXT("SBZRappellingRopeComponent"));
    this->RappellingRopeData = NULL;
    this->RootComponent = RappellingRopeComponent;
}


