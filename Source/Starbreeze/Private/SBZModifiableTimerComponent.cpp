#include "SBZModifiableTimerComponent.h"
#include "Net/UnrealNetwork.h"

USBZModifiableTimerComponent::USBZModifiableTimerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Duration = 30.00f;
    this->SabotagePoint = NULL;
    this->TimeElapsed = 0.00f;
    this->CurrentSpeed = 1.00f;
    this->NextProgressionValueIndex = 0;
    this->CurrentState = ESBZTimerState::Inactive;
}

void USBZModifiableTimerComponent::ServerStartTimer() {
}

void USBZModifiableTimerComponent::ServerSetTimerSpeed(float NewSpeed) {
}

void USBZModifiableTimerComponent::ServerResetTimer(bool bStartTimer) {
}

void USBZModifiableTimerComponent::ServerPauseTimer() {
}

void USBZModifiableTimerComponent::OnRep_TimerState() {
}

void USBZModifiableTimerComponent::OnRep_NextProgressionValueIndex() {
}

void USBZModifiableTimerComponent::OnRep_CurrentSpeed() {
}

void USBZModifiableTimerComponent::Multicast_SetTimerState_Implementation(ESBZTimerState NewState) {
}

void USBZModifiableTimerComponent::Multicast_SetTimerSpeed_Implementation(float NewSpeed) {
}

void USBZModifiableTimerComponent::Multicast_ResetTimer_Implementation(bool bStartTimer) {
}

float USBZModifiableTimerComponent::GetTimerSpeed() const {
    return 0.0f;
}

float USBZModifiableTimerComponent::GetTimeRemaining() const {
    return 0.0f;
}

float USBZModifiableTimerComponent::GetTimeElapsed() const {
    return 0.0f;
}

float USBZModifiableTimerComponent::GetProgressMade() const {
    return 0.0f;
}

float USBZModifiableTimerComponent::GetDuration() const {
    return 0.0f;
}

ESBZTimerState USBZModifiableTimerComponent::GetCurrentState() const {
    return ESBZTimerState::Inactive;
}

void USBZModifiableTimerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZModifiableTimerComponent, TimeElapsed);
    DOREPLIFETIME(USBZModifiableTimerComponent, CurrentSpeed);
    DOREPLIFETIME(USBZModifiableTimerComponent, NextProgressionValueIndex);
    DOREPLIFETIME(USBZModifiableTimerComponent, CurrentState);
}


