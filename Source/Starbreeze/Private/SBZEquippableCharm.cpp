#include "SBZEquippableCharm.h"

void ASBZEquippableCharm::UpdateMeshPropertiesFrom(const UMeshComponent* Reference, USBZOutlineComponent* OutlineComponent, bool bIsReset) {
}

void ASBZEquippableCharm::SetOwningEquippable(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::SetOwningCharacter(const ASBZCharacter* Character) {
}

void ASBZEquippableCharm::ResetMeshProperties(const UMeshComponent* Reference, USBZOutlineComponent* OutlineComponent) {
}

void ASBZEquippableCharm::OnParentDestroyed(AActor* DestroyedParent) {
}

void ASBZEquippableCharm::OnEquippableUsed_Implementation(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::OnEquippableUnequipped_Implementation(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::OnEquippableUndropped_Implementation(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::OnEquippableEquipped_Implementation(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::OnEquippableDropped_Implementation(const ASBZEquippable* Equippable) {
}

FVector ASBZEquippableCharm::GetOwningCharacterVelocity() const {
    return FVector{};
}

float ASBZEquippableCharm::GetEquippableTimeLastUsed() const {
    return 0.0f;
}

void ASBZEquippableCharm::EquippableUsed(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::EquippableUnequipped(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::EquippableUndropped(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::EquippableEquipped(const ASBZEquippable* Equippable) {
}

void ASBZEquippableCharm::EquippableDropped(const ASBZEquippable* Equippable) {
}

ASBZEquippableCharm::ASBZEquippableCharm() {
    this->OwningCharacter = NULL;
    this->OwningEquippable = NULL;
}

