#include "SBZFilteredTriggerVolume.h"
#include "SBZActorFilterComponent.h"

ASBZFilteredTriggerVolume::ASBZFilteredTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorFilterComponent = CreateDefaultSubobject<USBZActorFilterComponent>(TEXT("ActorFilterComponent"));
    this->bShouldStartEnabled = true;
    this->bNetLoadOnClient = false;
}

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


