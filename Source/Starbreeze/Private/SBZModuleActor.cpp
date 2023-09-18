#include "SBZModuleActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZModuleActor::ASBZModuleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMustHackAllModules = false;
    this->bMustCutAllModules = false;
    this->DefaultCuttingModule = NULL;
    this->DefaultCuttingModule = NULL;
    this->DefaultHackingModule = NULL;
    this->DefaultHackingModule = NULL;
    this->ConnectedGate = NULL;
    this->CurrentState = ESBZModuleActorState::None;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

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


