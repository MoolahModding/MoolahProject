#include "SBZLoadingState.h"
#include "Net/UnrealNetwork.h"

ASBZLoadingState::ASBZLoadingState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->LoadingProgress = 0.00f;
}

void ASBZLoadingState::ServerSetLoadingProgress_Implementation(float InLoadingProgress) {
}
bool ASBZLoadingState::ServerSetLoadingProgress_Validate(float InLoadingProgress) {
    return true;
}

void ASBZLoadingState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLoadingState, LoadingProgress);
}


