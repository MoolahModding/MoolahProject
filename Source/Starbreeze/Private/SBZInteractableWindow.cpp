#include "SBZInteractableWindow.h"
#include "ESBZGateState.h"
#include "SBZInteractableWindowComponent.h"

ASBZInteractableWindow::ASBZInteractableWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZInteractableWindowComponent>(TEXT("SBZInteractableComponent"))) {
    this->bIsMinigameIgnored = true;
    this->InitialState = ESBZGateState::Locked;
    this->NavLinkComponentArray.AddDefaulted(1);
    this->NavLinkAgilityComponentArray.AddDefaulted(1);
    this->bIsOpenFromFrontAllowed = false;
    this->bIsOnlyTraversedWhenAlerted = true;
    this->bIsSliding = true;
    this->bUseBreachPOIandSound = true;
    this->Tags.AddDefaulted(1);
}


