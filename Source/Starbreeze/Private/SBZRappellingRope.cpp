#include "SBZRappellingRope.h"
#include "SBZRappellingRopeComponent.h"

ASBZRappellingRope::ASBZRappellingRope() {
    this->RappellingRopeComponent = CreateDefaultSubobject<USBZRappellingRopeComponent>(TEXT("SBZRappellingRopeComponent"));
    this->RappellingRopeData = NULL;
}

