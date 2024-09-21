#include "SBZAIInteractHandler.h"

USBZAIInteractHandler::USBZAIInteractHandler() {
    this->Interactable = NULL;
    this->Interactor = NULL;
}

void USBZAIInteractHandler::OnInteractionStarted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void USBZAIInteractHandler::OnInteractionCompleted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlled) {
}


