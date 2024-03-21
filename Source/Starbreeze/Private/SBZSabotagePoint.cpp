#include "SBZSabotagePoint.h"
#include "SBZAIAttractorComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"
#include "SBZOutlineComponent.h"

bool ASBZSabotagePoint::SetEnabled(bool bEnabled) {
    return false;
}

void ASBZSabotagePoint::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZSabotagePoint::OnInteractionStateChanged(const USBZBaseInteractableComponent* Interactable, bool bNewState) {
}

void ASBZSabotagePoint::BroadcastOnSabotaged(bool bIsSabotaged) {
}

ASBZSabotagePoint::ASBZSabotagePoint() {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->MarkerAsset = NULL;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->bIsInteractable = true;
    this->SabotageCooldownTime = 0.00f;
    this->bDesiredEnabledState = false;
    this->MarkerId = -1;
}

