#include "SBZCarriedBag.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SceneComponent.h"
#include "SBZInteractableCarriedBagComponent.h"

ASBZCarriedBag::ASBZCarriedBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SkeletalMeshComponentBudgeted = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponentBudgeted"));
    this->OwningCharacter = NULL;
    this->AIBagOutlineAsset = NULL;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableCarriedBagComponent>(TEXT("SBZInteractableComponent"));
    this->SkeletalMeshComponentBudgeted->SetupAttachment(RootComponent);
}

void ASBZCarriedBag::OnInteractionComplete(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}





