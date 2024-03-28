#include "SBZFilteredTriggerVolume.h"
#include "SBZActorFilterComponent.h"

void ASBZFilteredTriggerVolume::SetVolumeEnabled(bool bEnabled) {
}

void ASBZFilteredTriggerVolume::OnFiltersAllHaveDesiredCountsChanged(bool bState) {
}

void ASBZFilteredTriggerVolume::OnFilterHasDesiredCountChanged(FName Identifer, bool bState) {
}

void ASBZFilteredTriggerVolume::OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}

void ASBZFilteredTriggerVolume::OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}

ASBZFilteredTriggerVolume::ASBZFilteredTriggerVolume() {
    this->ActorFilterComponent = CreateDefaultSubobject<USBZActorFilterComponent>(TEXT("ActorFilterComponent"));
    this->bShouldStartEnabled = true;
}

