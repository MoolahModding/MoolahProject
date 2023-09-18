#include "SBZCarriedBag.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SceneComponent.h"
#include "SBZInteractableComponent.h"

ASBZCarriedBag::ASBZCarriedBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponentBudgeted = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponentBudgeted"));
    this->SkeletalMeshComponentBudgeted->SetupAttachment(RootComponent);
    this->OwningCharacter = NULL;
    this->AIBagOutlineAsset = NULL;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZCarriedBag::HandleServerComplete(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZCarriedBag::HandlePredictedEnd(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}




