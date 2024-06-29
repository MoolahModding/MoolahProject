#include "SBZVariationEditComponent.h"

USBZVariationEditComponent::USBZVariationEditComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->VariationSet = NULL;
    this->CurrentVariationIdx = -1;
    this->SkeletalMeshComponent = NULL;
    this->StaticMeshComponent = NULL;
}


