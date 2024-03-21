#include "SBZModifiableTimer.h"
#include "Net/UnrealNetwork.h"

void ASBZModifiableTimer::StartTimer() {
}

void ASBZModifiableTimer::SetTimerSpeed(float NewSpeed) {
}

void ASBZModifiableTimer::SetTimerDuration(float NewDuration) {
}

void ASBZModifiableTimer::ResetTimer(bool bStartTimer) {
}

void ASBZModifiableTimer::PauseTimer() {
}

void ASBZModifiableTimer::OnRep_TimerState() {
}

void ASBZModifiableTimer::Multicast_SetTimerState_Implementation(ESBZTimerState NewState) {
}

void ASBZModifiableTimer::Multicast_SetTimerSpeed_Implementation(float NewSpeed) {
}

void ASBZModifiableTimer::Multicast_SetTimeElapsed_Implementation(float NewTimeElapsed) {
}

void ASBZModifiableTimer::Multicast_SetDuration_Implementation(float NewDuration) {
}

void ASBZModifiableTimer::Multicast_ResetTimerAndStart_Implementation() {
}

void ASBZModifiableTimer::Multicast_ResetTimerAndPause_Implementation() {
}

float ASBZModifiableTimer::GetTimeRemaining() const {
    return 0.0f;
}





void ASBZModifiableTimer::AddTimeElapsed(float TimeToAdd) {
}

void ASBZModifiableTimer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZModifiableTimer, Duration);
    DOREPLIFETIME(ASBZModifiableTimer, TimeElapsed);
    DOREPLIFETIME(ASBZModifiableTimer, CurrentSpeed);
    DOREPLIFETIME(ASBZModifiableTimer, CurrentTimerState);
}

ASBZModifiableTimer::ASBZModifiableTimer() {
    this->Duration = 30.00f;
    this->ProgressionValuesToPost.AddDefaulted(4);
    this->TimeElapsed = 0.00f;
    this->CurrentSpeed = 1.00f;
    this->CurrentTimerState = ESBZTimerState::Inactive;
    this->NextProgressionToPostIndex = 0;
}

