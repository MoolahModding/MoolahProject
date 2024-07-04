#include "SBZHoldOutFogApplierComponent.h"
#include "Net/UnrealNetwork.h"

USBZHoldOutFogApplierComponent::USBZHoldOutFogApplierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FogActor = NULL;
}

void USBZHoldOutFogApplierComponent::OnRep_FogSettings() {
}

void USBZHoldOutFogApplierComponent::MultiCast_ReplicateFogSettings_Implementation(const FSBZHoldOutDroneFogSettings& FogSettings) {
}

void USBZHoldOutFogApplierComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZHoldOutFogApplierComponent, ReplicatedFogSettings);
}


