#include "SBZModularMeshComponent.h"

USBZModularMeshComponent::USBZModularMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseRig = NULL;
    this->VisibilityRig = NULL;
    this->bLastOutlineStateToApply = false;
    this->bMeshReady = false;
}


