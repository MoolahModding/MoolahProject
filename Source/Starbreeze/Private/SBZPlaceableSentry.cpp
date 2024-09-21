#include "SBZPlaceableSentry.h"

ASBZPlaceableSentry::ASBZPlaceableSentry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SentryClassToSpawn = NULL;
}


