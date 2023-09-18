#include "SBZModifiableTimer.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZModifiableTimer::ASBZModifiableTimer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Duration = 30.00f;
    this->ProgressionValuesToPost.AddDefaulted(4);
    this->TimeElapsed = 0.00f;
    this->CurrentSpeed = 1.00f;
    this->bIsRunning = false;
    this->NextProgressionToPostIndex = 0;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

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

void ASBZModifiableTimer::OnRep_IsRunning() {
}

void ASBZModifiableTimer::Multicast_StartTimer_Implementation() {
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

void ASBZModifiableTimer::Multicast_PauseTimer_Implementation() {
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
    DOREPLIFETIME(ASBZModifiableTimer, bIsRunning);
}


