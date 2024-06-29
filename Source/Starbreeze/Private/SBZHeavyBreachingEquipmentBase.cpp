#include "SBZHeavyBreachingEquipmentBase.h"
#include "Net/UnrealNetwork.h"

ASBZHeavyBreachingEquipmentBase::ASBZHeavyBreachingEquipmentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->HeatupTimeSeconds = 5.00f;
    this->NumberOfPartsAdded = 0;
    this->EstimatedFuelEndTime = 0.00f;
    this->PartAddedEvent = NULL;
}

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


