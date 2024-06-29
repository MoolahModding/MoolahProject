#include "SBZAICharacterInteractableComponent.h"
#include "SBZInteractAICharacterRequirement.h"

USBZAICharacterInteractableComponent::USBZAICharacterInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NativeRequirement = CreateDefaultSubobject<USBZInteractAICharacterRequirement>(TEXT("SBZInteractAICharacterRequirement"));
    this->bInteractionEnabled = true;
    this->bPredictLocalEnd = true;
    this->ModeArray.AddDefaulted(2);
}


