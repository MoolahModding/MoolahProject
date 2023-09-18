#include "SBZHackingMinigameActor.h"
#include "SBZHackableInteractableComponent.h"
#include "SBZHackingComponent.h"

ASBZHackingMinigameActor::ASBZHackingMinigameActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HackingComponent = CreateDefaultSubobject<USBZHackingComponent>(TEXT("SBZHackingComponent"));
    this->HackableInteractable = CreateDefaultSubobject<USBZHackableInteractableComponent>(TEXT("SBZHackableInteractableComponent"));
    this->MarkerAsset = NULL;
    this->MarkerId = -1;
    this->Interactable = NULL;
}

void ASBZHackingMinigameActor::OnHackingStateChanged(AActor* InOwner, ESBZHackingState NewState, bool bDoCosmetics) {
}



