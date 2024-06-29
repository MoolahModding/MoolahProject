#include "SBZAICrewController.h"
#include "Net/UnrealNetwork.h"

ASBZAICrewController::ASBZAICrewController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrewState = NULL;
    this->CustodyDurationArray[0] = 0.00f;
    this->CustodyDurationArray[1] = 0.00f;
    this->CustodyDurationArray[2] = 0.00f;
    this->CustodyDurationArray[3] = 0.00f;
    this->LastWardRoom = NULL;
}

void ASBZAICrewController::OnRep_CrewState() {
}

void ASBZAICrewController::OnCrewStateDestroyed(AActor* DestroyedActor) {
}

void ASBZAICrewController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAICrewController, CrewState);
}


