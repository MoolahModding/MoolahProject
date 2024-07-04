#include "SBZPlayerInteractableComponent.h"
#include "SBZInteractPlayerRequirement.h"

USBZPlayerInteractableComponent::USBZPlayerInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NativeRequirement = CreateDefaultSubobject<USBZInteractPlayerRequirement>(TEXT("SBZInteractPlayerRequirement"));
    this->ModeArray.AddDefaulted(1);
}


