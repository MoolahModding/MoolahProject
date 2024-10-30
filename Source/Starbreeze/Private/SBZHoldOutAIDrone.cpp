#include "SBZHoldOutAIDrone.h"
#include "AkComponent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIDroneMovementComponent.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZHoldOutDroneVoiceComponent.h"
#include "SBZHoldOutEventReactorComponent.h"
#include "SBZHoldOutFogApplierComponent.h"
#include "SBZSkeletalMeshComponentBudgeted.h"
#include "Templates/SubclassOf.h"

ASBZHoldOutAIDrone::ASBZHoldOutAIDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZSkeletalMeshComponentBudgeted>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<USBZAIDroneMovementComponent>(TEXT("CharMoveComp"))) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->FollowDroneObjective = NULL;
    this->AbilitySystemComponent = CreateDefaultSubobject<USBZAbilitySystemComponent>(TEXT("SBZAbilitySystemComponent"));
    this->FogApplierComponent = CreateDefaultSubobject<USBZHoldOutFogApplierComponent>(TEXT("SBZHoldOutFogApplierComponent"));
    this->EventReactorComponent = CreateDefaultSubobject<USBZHoldOutEventReactorComponent>(TEXT("SBZHoldOutEventReactorComponent"));
    this->VoiceComponent = CreateDefaultSubobject<USBZHoldOutDroneVoiceComponent>(TEXT("SBZHoldOutDroneVoiceComponent"));
    this->VOCollection = NULL;
    this->AKComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->InitHoldOutAreaIndex = 0;
    this->PayoutValue = 0;
    this->CurrentDifficulty = ESBZHoldOutModeDifficulty::Default;
    this->CurrentHoldOutAreaIndex = -1;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->AKComponent->SetupAttachment(RootComponent);
}

void ASBZHoldOutAIDrone::StopOverrideFogSettings() {
}

void ASBZHoldOutAIDrone::ShuffleAreaOrder() {
}

void ASBZHoldOutAIDrone::SetInstantGameplayTags(const FGameplayTagContainer& InTags) {
}

void ASBZHoldOutAIDrone::SetInstantGameplayTag(const FGameplayTag& InTag) {
}

void ASBZHoldOutAIDrone::SetGameplayTag(const FGameplayTag& InTag, int32 Count) {
}

void ASBZHoldOutAIDrone::SetEventTags(const FGameplayTagContainer& InTags) {
}

void ASBZHoldOutAIDrone::SelectNextArea() {
}

void ASBZHoldOutAIDrone::OverrideFogSettings(const FSBZHoldOutDroneFogSettings& FogSettings, float OverrideDuration) {
}

void ASBZHoldOutAIDrone::OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags) {
}

void ASBZHoldOutAIDrone::OnObjectiveSelectedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags) {
}

void ASBZHoldOutAIDrone::OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags) {
}

void ASBZHoldOutAIDrone::OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, int32 OldProgressCount, int32 NewProgressCount, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags) {
}

void ASBZHoldOutAIDrone::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

void ASBZHoldOutAIDrone::OnAreaCompletedCallBack(bool bSuccess, ASBZHoldOutArea* HoldOutArea) {
}

void ASBZHoldOutAIDrone::Multicast_SpawnTagReactionsForTag_Implementation(const FGameplayTag& Tag, int32 OldTagCount, int32 TagCount) {
}

void ASBZHoldOutAIDrone::Multicast_SetCurrentHoldOutAreaIndex_Implementation(int32 InCurrentHoldOutAreaIndex) {
}

void ASBZHoldOutAIDrone::Multicast_ApplyGamePlayEffectOnEnemies_Implementation(TSubclassOf<UGameplayEffect> GameplayEffectClass) {
}

void ASBZHoldOutAIDrone::MoveToNextHoldOutArea() {
}

int32 ASBZHoldOutAIDrone::GetGameplayTagCount(const FGameplayTag& InTag) const {
    return 0;
}

ASBZHoldOutArea* ASBZHoldOutAIDrone::GetCurrentArea() const {
    return NULL;
}

void ASBZHoldOutAIDrone::ClearTagsForCurrentObjectives() {
}

void ASBZHoldOutAIDrone::ApplyGamePlayEffectOnEnemies(TSubclassOf<UGameplayEffect> GameplayEffectClass) {
}

void ASBZHoldOutAIDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZHoldOutAIDrone, GameplayTagCounterArray);
    DOREPLIFETIME(ASBZHoldOutAIDrone, CurrentHoldOutAreaIndex);
}


