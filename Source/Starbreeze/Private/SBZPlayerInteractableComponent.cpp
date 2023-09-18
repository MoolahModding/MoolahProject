#include "SBZPlayerInteractableComponent.h"
#include "SBZInteractPlayerRequirement.h"

USBZPlayerInteractableComponent::USBZPlayerInteractableComponent() {
    this->ModeArray.AddDefaulted(1);
    this->NativeRequirement = CreateDefaultSubobject<USBZInteractPlayerRequirement>(TEXT("SBZInteractPlayerRequirement"));
}


