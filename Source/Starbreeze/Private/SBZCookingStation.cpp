#include "SBZCookingStation.h"
#include "Net/UnrealNetwork.h"
#include "SBZExplosionDamageType.h"

void ASBZCookingStation::SetCookingEnabled(bool bIsEnabled) {
}

void ASBZCookingStation::OnSabotageChanged(bool bIsSabotaged) {
}

void ASBZCookingStation::OnRep_CurrentState() {
}

void ASBZCookingStation::OnAckIngredientAdded(USBZBaseInteractableComponent* Comp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZCookingStation::Multicast_SetState_Implementation(ESBZCookingState NewState) {
}

void ASBZCookingStation::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}



void ASBZCookingStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCookingStation, CurrentState);
}

ASBZCookingStation::ASBZCookingStation() {
    this->IngredientInteractableArray.AddDefaulted(3);
    this->SecondaryBagType = NULL;
    this->TertiaryBagType = NULL;
    this->SabotagableStateBitmask = 0;
    this->Seed = -1;
    this->IncreasedCookedDuration = 10.00f;
    this->CurrentState = ESBZCookingState::Inactive;
    this->ExplosionSoundEvent = NULL;
    this->ExplosionDelay = 1.00f;
    this->AIExplosionRadius = 500.00f;
    this->PlayerExplosionRadius = 300.00f;
    this->DamageDistanceArray.AddDefaulted(1);
    this->ArmorPenetration = 1.00f;
    this->FriendlyFireDamageScale = 1.00f;
    this->FriendlyFireArmorPenetrationScale = 1.00f;
    this->ExplosionDamageType = USBZExplosionDamageType::StaticClass();
    this->GameplayEffectClass = NULL;
    this->ExplosionEffect = NULL;
    this->bDoDecal = true;
    this->LocalPlayerFeedback = NULL;
    this->LastInteractor = NULL;
}

