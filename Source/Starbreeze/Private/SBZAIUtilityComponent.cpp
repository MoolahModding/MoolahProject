#include "SBZAIUtilityComponent.h"

USBZAIUtilityComponent::USBZAIUtilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTimeSliceDecidersLoop = true;
    this->Default = NULL;
    this->AIController = NULL;
    this->SelectedDecider = NULL;
    this->ActiveDecider = NULL;
    this->CurrentUtilityData = NULL;
    this->Pawn = NULL;
    this->CachedTopDecider = NULL;
}


