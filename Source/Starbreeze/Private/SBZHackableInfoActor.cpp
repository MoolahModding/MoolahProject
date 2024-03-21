#include "SBZHackableInfoActor.h"
#include "Net/UnrealNetwork.h"

void ASBZHackableInfoActor::ResetHackableActorToGenericHack(const float InDuration, bool bKeepCustomMessage, ESBZHackableActorState ResetState) {
}

void ASBZHackableInfoActor::OnHeistGoneLoud() {
}

void ASBZHackableInfoActor::Multicast_ResetHackableActorToGenericHack_Implementation() {
}



void ASBZHackableInfoActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZHackableInfoActor, bHasBeenResetToGenericHack);
}

ASBZHackableInfoActor::ASBZHackableInfoActor() {
    this->bHasBeenResetToGenericHack = false;
    this->bShouldResetOnHeistStateChange = true;
    this->DurationSecondsAfterReset = 60.00f;
    this->StateToResetTo = ESBZHackableActorState::Active;
    this->bShouldKeepCustomMessage = true;
    this->bShouldResetToGenericHack = true;
}

