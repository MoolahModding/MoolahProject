#include "SBZCarriedHackableKey.h"
#include "NiagaraComponent.h"

ASBZCarriedHackableKey::ASBZCarriedHackableKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZoneEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->ZoneEffect->SetupAttachment(RootComponent);
    this->HackDuration = 30.00f;
    this->DistanceCheckFrequency = 1.00f;
    this->MaxAllowedDistance = 100.00f;
    this->MaxChecksOutsideOfAllowedDistance = 2;
    this->CurrentHackingCharacter = NULL;
    this->CheckOutsideCircleCount = 0;
    this->ChecksMade = 0;
}

void ASBZCarriedHackableKey::OnInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState) {
}

void ASBZCarriedHackableKey::Multicast_OnHackComplete_Implementation() {
}






