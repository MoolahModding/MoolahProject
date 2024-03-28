#include "SBZPlaceableBase.h"
#include "SBZAIAttractorComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZPlaceableBase::ASBZPlaceableBase() {
    this->AttractComment = NULL;
    this->AttractCommentPriority = ESBZVoicePriority::HighPriority;
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->Outline = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
}

