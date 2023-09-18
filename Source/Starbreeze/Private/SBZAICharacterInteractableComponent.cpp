#include "SBZAICharacterInteractableComponent.h"
#include "SBZInteractAICharacterRequirement.h"

USBZAICharacterInteractableComponent::USBZAICharacterInteractableComponent() {
    this->ModeArray.AddDefaulted(2);
    this->bInteractionEnabled = true;
    this->bPredictLocalEnd = true;
    this->NativeRequirement = CreateDefaultSubobject<USBZInteractAICharacterRequirement>(TEXT("SBZInteractAICharacterRequirement"));
}


