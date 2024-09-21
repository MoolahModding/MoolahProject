#include "SBZMultiCodeKeypad.h"
#include "Net/UnrealNetwork.h"

ASBZMultiCodeKeypad::ASBZMultiCodeKeypad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KeypadInteractableComponentArray.AddDefaulted(12);
    this->NumberOfCodes = 3;
    this->CurrentCodeIndex = 0;
}

void ASBZMultiCodeKeypad::OnRep_CurrentCodeIndex() {
}


void ASBZMultiCodeKeypad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZMultiCodeKeypad, CurrentCodeIndex);
}


