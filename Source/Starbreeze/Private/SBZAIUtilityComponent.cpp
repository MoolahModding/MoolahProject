#include "SBZAIUtilityComponent.h"

USBZAIUtilityComponent::USBZAIUtilityComponent() {
    this->bTimeSliceDecidersLoop = true;
    this->Default = NULL;
    this->AIController = NULL;
    this->SelectedDecider = NULL;
    this->ActiveDecider = NULL;
    this->CurrentUtilityData = NULL;
    this->Pawn = NULL;
    this->CachedTopDecider = NULL;
}

