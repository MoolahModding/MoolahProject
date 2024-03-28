#include "SBZHackableCodeActor.h"
#include "Net/UnrealNetwork.h"

void ASBZHackableCodeActor::ResetHackableActorToGenericHack(const float InDuration, bool bKeepCustomMessage, ESBZHackableActorState ResetState) {
}

void ASBZHackableCodeActor::OnHeistGoneLoud() {
}

void ASBZHackableCodeActor::Multicast_ResetHackableActorToGenericHack_Implementation() {
}


void ASBZHackableCodeActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZHackableCodeActor, Codes);
    DOREPLIFETIME(ASBZHackableCodeActor, bIsResetToGenericHack);
}

ASBZHackableCodeActor::ASBZHackableCodeActor() {
    this->NumberOfCodes = 4;
    this->bShouldResetOnHeistStateChange = true;
    this->DurationSecondsAfterReset = 60.00f;
    this->StateToResetTo = ESBZHackableActorState::Active;
    this->bShouldKeepCustomMessage = true;
    this->bShouldResetToGenericHack = true;
    this->bIsResetToGenericHack = false;
}

