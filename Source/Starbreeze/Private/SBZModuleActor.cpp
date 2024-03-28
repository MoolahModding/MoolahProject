#include "SBZModuleActor.h"
#include "Net/UnrealNetwork.h"

void ASBZModuleActor::SetEnabled(bool bInEnabled) {
}

void ASBZModuleActor::OnServerHackingStateChanged(EPD3MiniGameState NewState) {
}

void ASBZModuleActor::OnServerCuttingComplete(ASBZCuttableActor* CuttableActor) {
}

void ASBZModuleActor::OnRep_CurrentState() {
}

void ASBZModuleActor::Multicast_SetState_Implementation(ESBZModuleActorState NewState) {
}


void ASBZModuleActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZModuleActor, CurrentState);
}

ASBZModuleActor::ASBZModuleActor() {
    this->bMustHackAllModules = false;
    this->bMustCutAllModules = false;
    this->DefaultCuttingModule = NULL;
    this->DefaultHackingModule = NULL;
    this->ConnectedGate = NULL;
    this->CurrentState = ESBZModuleActorState::None;
}

