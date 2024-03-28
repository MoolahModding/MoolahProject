#include "SBZPersistentWorldDamageZoneComponent.h"

void USBZPersistentWorldDamageZoneComponent::HandleTakeRadialDamage(AActor* DamagedActor, float DamageAmount, const FRadialDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void USBZPersistentWorldDamageZoneComponent::HandleTakePointDamage(AActor* DamagedActor, float DamageAmount, const FPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

USBZPersistentWorldDamageZoneComponent::USBZPersistentWorldDamageZoneComponent() {
    this->PreviousRadialDamageCauser = NULL;
    this->MaxHealth = 1000.00f;
    this->Health = 1000.00f;
    this->RadialDamageMultiplier = 10.00f;
    this->bAffectOwnerOnly = true;
}

