#include "SBZHackingMinigameActor.h"
#include "SBZHackableInteractableComponent.h"
#include "SBZHackingComponent.h"

void ASBZHackingMinigameActor::OnHackingStateChanged(AActor* InOwner, ESBZHackingState NewState, bool bDoCosmetics) {
}


ASBZHackingMinigameActor::ASBZHackingMinigameActor() {
    this->HackingComponent = CreateDefaultSubobject<USBZHackingComponent>(TEXT("SBZHackingComponent"));
    this->HackableInteractable = CreateDefaultSubobject<USBZHackableInteractableComponent>(TEXT("SBZHackableInteractableComponent"));
    this->MarkerAsset = NULL;
    this->MarkerId = -1;
}

