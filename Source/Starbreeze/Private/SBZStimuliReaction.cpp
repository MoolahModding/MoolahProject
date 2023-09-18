#include "SBZStimuliReaction.h"

FSBZStimuliReaction::FSBZStimuliReaction() {
    this->AllowedStates = 0;
    this->AllowedBehaviors = 0;
    this->Action = NULL;
    this->bShouldSetToIsAlert = false;
    this->Predicate = NULL;
}

