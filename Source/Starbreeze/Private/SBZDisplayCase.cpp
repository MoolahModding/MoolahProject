#include "SBZDisplayCase.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZPropDamageComponent.h"

ASBZDisplayCase::ASBZDisplayCase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasLock = false;
    this->bHasAlarm = false;
    this->bHasLockdown = false;
    this->bShouldHackLiftLockdown = true;
    this->bCanBeClosed = false;
    this->bMustLockpickAllLocks = false;
    this->bIsLocksDisabledOnLockdown = false;
    this->SoundRange = 1500.00f;
    this->bIsLocked = false;
    this->bIsLarmed = false;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->AlarmNotificationAsset = NULL;
    this->ShutterMesh = NULL;
    this->DefaultLock = NULL;
    this->DefaultAlarm = NULL;
    this->CurrentState = ESBZDisplayCaseState::Closed;
    this->PropDamage = CreateDefaultSubobject<USBZPropDamageComponent>(TEXT("SBZPropDamageComponent"));
    this->BrokenMesh = NULL;
    this->PreviousState = ESBZDisplayCaseState::Closed;
    this->TargetState = ESBZDisplayCaseState::None;
    this->AttachedLoot = NULL;
}

void ASBZDisplayCase::SetLockdownEnabled(bool bEnabled) {
}

void ASBZDisplayCase::SetLockdownActive(bool bInActive) {
}

void ASBZDisplayCase::SetDisplayCaseLocked(bool bInIsLocked) {
}

void ASBZDisplayCase::SetDisplayCaseLarmed(bool bInIsLarmed) {
}

void ASBZDisplayCase::OnRep_CurrentState(ESBZDisplayCaseState OldState) {
}

void ASBZDisplayCase::OnPropDamageHits(UActorComponent* HitComponent, int32 Hits, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext) {
}

void ASBZDisplayCase::OnLockpickStateChanged(EPD3MiniGameState NewState) {
}

void ASBZDisplayCase::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void ASBZDisplayCase::OnHackingStateChanged(EPD3MiniGameState NewState) {
}

void ASBZDisplayCase::OnDoorTimelineDone() {
}

void ASBZDisplayCase::Multicast_SetState_Implementation(ESBZDisplayCaseState NewState) {
}

void ASBZDisplayCase::Multicast_SetIsLocked_Implementation(bool bInIsLocked) {
}

void ASBZDisplayCase::Multicast_SetIsLarmed_Implementation(bool bInIsLarmed) {
}



void ASBZDisplayCase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZDisplayCase, bIsLocked);
    DOREPLIFETIME(ASBZDisplayCase, bIsLarmed);
    DOREPLIFETIME(ASBZDisplayCase, CurrentState);
}


