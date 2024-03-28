#include "SBZCarriedBag.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "SBZInteractableCarriedBagComponent.h"

void ASBZCarriedBag::OnInteractionComplete(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}




ASBZCarriedBag::ASBZCarriedBag() {
    this->SkeletalMeshComponentBudgeted = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponentBudgeted"));
    this->OwningCharacter = NULL;
    this->AIBagOutlineAsset = NULL;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableCarriedBagComponent>(TEXT("SBZInteractableComponent"));
}

