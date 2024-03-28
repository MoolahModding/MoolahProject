#include "SBZLoadingState.h"
#include "Net/UnrealNetwork.h"

void ASBZLoadingState::ServerSetLoadingProgress_Implementation(float InLoadingProgress) {
}
bool ASBZLoadingState::ServerSetLoadingProgress_Validate(float InLoadingProgress) {
    return true;
}

void ASBZLoadingState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLoadingState, LoadingProgress);
}

ASBZLoadingState::ASBZLoadingState() {
    this->LoadingProgress = 0.00f;
}

