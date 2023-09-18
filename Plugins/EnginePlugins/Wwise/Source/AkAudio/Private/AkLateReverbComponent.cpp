#include "AkLateReverbComponent.h"

UAkLateReverbComponent::UAkLateReverbComponent() {
    this->bEnable = true;
    this->SendLevel = 1.00f;
    this->FadeRate = 0.50f;
    this->Priority = 1.00f;
    this->AutoAssignAuxBus = true;
    this->AuxBus = NULL;
    this->AuxBusManual = NULL;
    this->bUseAttachParentBound = true;
}

void UAkLateReverbComponent::AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent) {
}


