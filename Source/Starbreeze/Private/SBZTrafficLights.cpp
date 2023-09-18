#include "SBZTrafficLights.h"
#include "Net/UnrealNetwork.h"

ASBZTrafficLights::ASBZTrafficLights(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivePoolIndex = -1;
    this->NextPoolTimer = 0.00f;
    this->TrafficManager = NULL;
    this->TrafficSettings = NULL;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZTrafficLights::UpdatePool_Implementation(ESBZTrafficLightStatus Status, const TArray<UStaticMeshComponent*>& Pool, const TArray<USBZAmbientSoundComponent*>& PedestrianSoundEmitters) {
}

void ASBZTrafficLights::Rep_ActivePoolStateIndex() {
}

void ASBZTrafficLights::Multicast_SetActivePool_Implementation(int32 NewActivePoolIndex) {
}

void ASBZTrafficLights::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZTrafficLights, ActivePoolIndex);
}


