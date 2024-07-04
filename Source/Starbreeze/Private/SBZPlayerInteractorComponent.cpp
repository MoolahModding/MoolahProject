#include "SBZPlayerInteractorComponent.h"

USBZPlayerInteractorComponent::USBZPlayerInteractorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistancePitchCurve = NULL;
    this->bIsValidThisFrame = false;
    this->LocalPlayerController = NULL;
    this->bIsInstantModeIndex = true;
    this->bIsFrontSelected = true;
    this->LastFailedScreenInteractableCheckFrame = 0;
    this->CheckScreenInteractableFrameInterval = 15;
    this->PendingOnScreenDelay = 0.50f;
    this->PendingOnScreenInteractable = NULL;
    this->PendingOnScreenTime = 0.00f;
}

bool USBZPlayerInteractorComponent::ShowInteractWidget() const {
    return false;
}

bool USBZPlayerInteractorComponent::IsCurrentInstant() const {
    return false;
}

USBZBaseInteractableComponent* USBZPlayerInteractorComponent::GetSelectedInteraction() const {
    return NULL;
}

FSBZInteractModeDisplayData USBZPlayerInteractorComponent::GetModeDisplayData(const FSBZInteractDisplayDataCollection& Collection, bool bIsInstant, bool& bOutIsFront) {
    return FSBZInteractModeDisplayData{};
}

bool USBZPlayerInteractorComponent::CanInteract() const {
    return false;
}


