#include "SBZCarriedStaticInteractionActor.h"

ASBZCarriedStaticInteractionActor::ASBZCarriedStaticInteractionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachedAIParent = NULL;
    this->bIsSingleUse = true;
}


