#include "SBZBreakableMachine.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZBreakableMachineInteractableComponent.h"
#include "SBZPropDamageComponent.h"

ASBZBreakableMachine::ASBZBreakableMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Tags.AddDefaulted(1);
    this->InteractableComponent = CreateDefaultSubobject<USBZBreakableMachineInteractableComponent>(TEXT("SBZBreakableMachineInteractableComponent"));
    this->PropDamageComponent = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("SBZPropDamageComponent"));
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->InstantLootCount = 1;
    this->CurrentState = ESBZBreakableMachineState::Closed;
    this->InstantLootTaken = 0;
}

void ASBZBreakableMachine::SetState(ESBZBreakableMachineState NewState) {
}

void ASBZBreakableMachine::OnRep_InstantLootTaken() {
}

void ASBZBreakableMachine::OnRep_CurrentState(ESBZBreakableMachineState OldState) {
}

void ASBZBreakableMachine::OnPropDamageHits(UActorComponent* PoolComponent, int32 Hits, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}

void ASBZBreakableMachine::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void ASBZBreakableMachine::OnAckCompleteInteraction(USBZBaseInteractableComponent* Comp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZBreakableMachine::Multicast_SetCurrentState_Implementation(ESBZBreakableMachineState NewState) {
}



void ASBZBreakableMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZBreakableMachine, CurrentState);
    DOREPLIFETIME(ASBZBreakableMachine, InstantLootTaken);
}


