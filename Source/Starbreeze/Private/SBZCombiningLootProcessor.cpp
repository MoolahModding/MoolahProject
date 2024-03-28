#include "SBZCombiningLootProcessor.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

void ASBZCombiningLootProcessor::OnServerClaimCombinedBagInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZCombiningLootProcessor::Multicast_UpdateCombinedBagsCount_Implementation(int32 NewCount) {
}


void ASBZCombiningLootProcessor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCombiningLootProcessor, CombinedBags);
}

ASBZCombiningLootProcessor::ASBZCombiningLootProcessor() {
    this->NumberOfBagsToCombine = 1;
    this->bCanQueueProcessing = false;
    this->ClaimCombinedBagInteractable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("ClaimCombinedBagInteractable"));
    this->CombinedBags = 0;
}

