#include "SBZStateMachine.h"
#include "SBZStateMachineState.h"
#include "SBZStateMachineData.h"

DEFINE_LOG_CATEGORY(LogStateMachine);

USBZStateMachine::USBZStateMachine() {
    this->CurrentState = NULL;
}

void USBZStateMachine::AddState(FName StateName, USBZStateMachineState* State) {
  this->States.Emplace(StateName, State);
}

void USBZStateMachine::SetState(FName StateName, USBZStateMachineData* InData) {
  if (!States.Contains(StateName)) { // Not in original shipped code.
    UE_LOG(LogStateMachine, Fatal, TEXT("%s: Non-existant state %s. Ignoreing SetState call"), *GetName(), *StateName.ToString());
    return;
  }

  if (CurrentState) {
    //CurrentState->CanExitState();

    UE_LOG(LogStateMachine, Display, TEXT("%s: Changing state %s -> %s"), *GetName(), *CurrentState->StateName.ToString(), *StateName.ToString());

    //CurrentState->OnExit();
  }
  else {
    UE_LOG(LogStateMachine, Display, TEXT("%s: Initialised with state %s"), *GetName(), *StateName.ToString());
  }

  if (!InData) {
    InData = NewObject<USBZStateMachineData>();
  }

  InData->PreviousState = CurrentState;
  CurrentState = nullptr;
  if (InData->PreviousState) {
    OnStateLeft.Broadcast(InData->PreviousState->StateName);
  }

  CurrentState = States[StateName];
  CurrentState->OnEnter(InData);
  HandleStateEntered(StateName);
  OnStateEntered.Broadcast(StateName);
}

FName USBZStateMachine::GetCurrentStateName() {
  if (CurrentState) {
    return CurrentState->StateName;
  }
  return FName(NAME_None);
}


