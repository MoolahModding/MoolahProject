#include "SBZAIInteractHandler.h"

void USBZAIInteractHandler::OnInteractionStarted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void USBZAIInteractHandler::OnInteractionCompleted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlled) {
}

USBZAIInteractHandler::USBZAIInteractHandler() {
    this->Interactable = NULL;
    this->Interactor = NULL;
}

