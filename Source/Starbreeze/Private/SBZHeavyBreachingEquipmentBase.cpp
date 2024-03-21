#include "SBZHeavyBreachingEquipmentBase.h"
#include "Net/UnrealNetwork.h"

void ASBZHeavyBreachingEquipmentBase::OnRep_PartsAdded() {
}

void ASBZHeavyBreachingEquipmentBase::Multicast_SetEstimatedFuelEndTime_Implementation(float InEstimatedFuelEndTime) {
}

void ASBZHeavyBreachingEquipmentBase::Multicast_OnPartAdded_Implementation() {
}


void ASBZHeavyBreachingEquipmentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZHeavyBreachingEquipmentBase, NumberOfPartsAdded);
    DOREPLIFETIME(ASBZHeavyBreachingEquipmentBase, EstimatedFuelEndTime);
}

ASBZHeavyBreachingEquipmentBase::ASBZHeavyBreachingEquipmentBase() {
    this->HeatupTimeSeconds = 5.00f;
    this->NumberOfPartsAdded = 0;
    this->EstimatedFuelEndTime = 0.00f;
    this->PartAddedEvent = NULL;
}

