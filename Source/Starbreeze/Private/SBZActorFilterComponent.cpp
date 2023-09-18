#include "SBZActorFilterComponent.h"

USBZActorFilterComponent::USBZActorFilterComponent() {
    this->PrimitiveComponent = NULL;
    this->CachedCollisionEnabledState = ECollisionEnabled::QueryOnly;
    this->bDisableWhenActorBeginsOverlapping = false;
    this->bDisableWhenDesiredCountReached = false;
    this->bDisableWhenAllDesiredCountsReached = false;
    this->bAlwaysBroadcastOverlapEndEvents = false;
}

void USBZActorFilterComponent::SetPrimitiveComponentEnableCollision(bool bEnabled) {
}

void USBZActorFilterComponent::SetPrimitiveComponent(UPrimitiveComponent* NewPrimitiveComponent) {
}

void USBZActorFilterComponent::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USBZActorFilterComponent::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


