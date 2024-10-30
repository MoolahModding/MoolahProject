#include "SBZObjective.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZObjective::ASBZObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DisplayOrder = 0;
    this->bIsOptional = false;
    this->ObjectiveType = ESBZObjectiveType::OneShot;
    this->bUIUseProgressBar = false;
    this->bReverseProgressBar = false;
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
    this->bCanEverReplicateMaxProgress = false;
    this->StartTimeSeconds = 0.00f;
    this->TickingLootManager = NULL;
    this->MarkerAsset = NULL;
}

void ASBZObjective::SetProgress(int32 NewProgress) {
}

void ASBZObjective::OnRep_State() {
}

void ASBZObjective::OnRep_Progress() {
}

void ASBZObjective::Multicast_SetMaxProgress_Implementation(float InMaxProgress) {
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
    DOREPLIFETIME(ASBZObjective, MaxProgress);
}


