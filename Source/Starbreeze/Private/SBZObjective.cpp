#include "SBZObjective.h"
#include "Net/UnrealNetwork.h"

void ASBZObjective::SetProgress(int32 NewProgress) {
}

void ASBZObjective::OnRep_State() {
}

void ASBZObjective::OnRep_Progress() {
}

void ASBZObjective::Multicast_OnStateChanged_Implementation(ESBZObjectiveState NewState) {
}

void ASBZObjective::Multicast_OnProgressChanged_Implementation(int32 NewProgress) {
}

bool ASBZObjective::IsActive() const {
    return false;
}

TArray<ASBZObjective*> ASBZObjective::GetActiveInGroup(UObject* WorldContext, ESBZObjectiveGroup Group) {
    return TArray<ASBZObjective*>();
}

void ASBZObjective::Fail() {
}

void ASBZObjective::Disable() {
}

void ASBZObjective::Complete(bool bEvenWhenInactive) {
}

void ASBZObjective::AddProgress(int32 NewProgress) {
}

void ASBZObjective::Activate(bool bEndActiveInGroup, bool bCompleteEndedInGroup) {
}

void ASBZObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZObjective, State);
    DOREPLIFETIME(ASBZObjective, Progress);
}

ASBZObjective::ASBZObjective() {
    this->DisplayOrder = 0;
    this->bIsOptional = false;
    this->bUIUseProgressBar = false;
    this->bUIReverseTimer = false;
    this->ProgressTextOption = ESBZProgressTextDisplayOption::ShowFraction;
    this->ObjectiveGroup = ESBZObjectiveGroup::None;
    this->ParentObjective = NULL;
    this->bProgressWhileInactive = true;
    this->bCompleteWhenInactiveFromProgress = true;
    this->bAutoActiveOnParent = true;
    this->SubobjectiveSetting = ESBZSubobjectiveComplete::CompleteOnAll;
    this->State = ESBZObjectiveState::None;
    this->Progress = 0;
    this->MaxProgress = 1;
    this->MaxProgressPerDifficulty[0] = -1;
    this->MaxProgressPerDifficulty[1] = -1;
    this->MaxProgressPerDifficulty[2] = -1;
    this->MaxProgressPerDifficulty[3] = -1;
    this->StartTimeSeconds = 0.00f;
    this->MarkerAsset = NULL;
}

