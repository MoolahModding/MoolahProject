#include "SBZPhysicsCorrectorVolume.h"
#include "Net/UnrealNetwork.h"

ASBZPhysicsCorrectorVolume::ASBZPhysicsCorrectorVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bIsVolumeEnabled = false;
    this->bStartVolumeEnabled = false;
}

void ASBZPhysicsCorrectorVolume::SetVolumeEnabledLocally(bool bEnabled) {
}

void ASBZPhysicsCorrectorVolume::SetVolumeEnabled(bool bEnabled) {
}

void ASBZPhysicsCorrectorVolume::OnRep_VolumeEnabled() {
}

void ASBZPhysicsCorrectorVolume::Multicast_SetVolumeEnabled_Implementation(bool bEnabled) {
}

void ASBZPhysicsCorrectorVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPhysicsCorrectorVolume, bIsVolumeEnabled);
}


