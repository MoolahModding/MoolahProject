#include "SBZLure.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"

void ASBZLure::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZLure::OnRep_IsPlayingEffects(bool bWasPlayingEffects) {
}

void ASBZLure::OnClientCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


void ASBZLure::Multicast_StopEffects_Implementation() {
}

void ASBZLure::MakeLureNoise() {
}

void ASBZLure::HandleHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void ASBZLure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLure, bIsPlayingEffects);
}

ASBZLure::ASBZLure() {
    this->LureRange = 1000.00f;
    this->LureNoiseStartEvent = NULL;
    this->LureNoiseStopEvent = NULL;
    this->LureActiveEffect = NULL;
    this->Duration = 20.00f;
    this->InitialDelay = 1.00f;
    this->bIsRepeatable = true;
    this->RepeatableCooldown = 10.00f;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->CurrentInvestigator = NULL;
    this->LureSoundComponent = NULL;
    this->EffectComponent = NULL;
    this->bIsPlayingEffects = false;
}

