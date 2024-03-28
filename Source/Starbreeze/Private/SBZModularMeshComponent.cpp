#include "SBZModularMeshComponent.h"

USBZModularMeshComponent::USBZModularMeshComponent() {
    this->BaseRig = NULL;
    this->VisibilityRig = NULL;
    this->bLastOutlineStateToApply = false;
    this->bMeshReady = false;
}

