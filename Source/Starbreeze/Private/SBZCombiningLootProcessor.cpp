#include "SBZCombiningLootProcessor.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZCombiningLootProcessor::ASBZCombiningLootProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfBagsToCombine = 1;
    this->ClaimCombinedBagInteractable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("ClaimCombinedBagInteractable"));
    this->CombinedBags = 0;
}

void ASBZCombiningLootProcessor::OnServerClaimCombinedBagInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZCombiningLootProcessor::Multicast_UpdateCombinedBagsCount_Implementation(int32 NewCount) {
}


void ASBZCombiningLootProcessor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCombiningLootProcessor, CombinedBags);
}


