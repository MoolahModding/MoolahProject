#include "SBZHoldOutEventReactorComponent.h"

USBZHoldOutEventReactorComponent::USBZHoldOutEventReactorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USBZHoldOutEventReactorComponent::SetBagTrackingEnabled(bool bEnabled) {
}

void USBZHoldOutEventReactorComponent::OnPlayersAliveCountChanged(const TArray<UObject*>& Players) {
}

void USBZHoldOutEventReactorComponent::OnPlayerDefeatStateChanged(const FSBZPlayerDefeatStateChangedData& InData) {
}

void USBZHoldOutEventReactorComponent::OnDamageTakenEvent(const FSBZDamageEvent& DamageEventData) {
}

void USBZHoldOutEventReactorComponent::OnAICrewDefeatStateChanged(const FSBZAICrewDefeatStateChangedData& InData) {
}


