#include "AkLateReverbComponent.h"

UAkLateReverbComponent::UAkLateReverbComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->bEnable = true;
    this->SendLevel = 1.00f;
    this->FadeRate = 0.50f;
    this->Priority = 1.00f;
    this->AutoAssignAuxBus = true;
    this->AuxBus = NULL;
    this->AuxBusManual = NULL;
}

void UAkLateReverbComponent::AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent) {
}


