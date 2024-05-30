#include "SBZCosmeticDestructionComponent.h"

USBZCosmeticDestructionComponent::USBZCosmeticDestructionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoolDown = 0.00f;
    this->Chance = 1.00f;
    this->bUseExplosionCoolDown = false;
    this->ExplosionCoolDown = 0.00f;
    this->bUseExplosionChance = false;
    this->ExplosionChance = 1.00f;
}

void USBZCosmeticDestructionComponent::HandleSBZTakeRadialDamageEx(AActor* DamagedActor, float Damage, const FRadialDamageEvent& DamageEvent, AController* InstigatedBy, AActor* DamageCauser) {
}

void USBZCosmeticDestructionComponent::HandleSBZTakePointDamageEx(AActor* DamagedActor, float Damage, const FPointDamageEvent& DamageEvent, AController* InstigatedBy, AActor* DamageCauser) {
}


