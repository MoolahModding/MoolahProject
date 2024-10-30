#include "SBZMissionState.h"
#include "Net/UnrealNetwork.h"
#include "SBZActorPoolManager.h"
#include "SBZAgentManager.h"
#include "SBZBagManager.h"
#include "SBZDialogManager.h"
#include "SBZLifeActionManager.h"
#include "SBZMarkerManager.h"
#include "SBZRagdollSyncManager.h"
#include "SBZSmallTalkManager.h"
#include "SBZStateMachineSharedState.h"
#include "SBZVehicleManager.h"
#include "SBZWindManager.h"

ASBZMissionState::ASBZMissionState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RandomSeed = -1;
    this->ServerChangelist = 748847;
    this->Difficulty = ESBZDifficulty::Default;
    this->PredictionTimeOutSeconds = 1.00f;
    this->ServerUnblockAbilityEarlierSeconds = 0.25f;
    this->MissionStartTime = 0;
    this->BagManager = CreateDefaultSubobject<USBZBagManager>(TEXT("BagManager"));
    this->CurrentHeistData = NULL;
    this->DialogManager = CreateDefaultSubobject<USBZDialogManager>(TEXT("SBZDialogManager"));
    this->AgentManager = CreateDefaultSubobject<USBZAgentManager>(TEXT("SBZAgentManager"));
    this->RagdollSyncManager = CreateDefaultSubobject<USBZRagdollSyncManager>(TEXT("SBZRagdollSyncManager"));
    this->VehicleManager = CreateDefaultSubobject<USBZVehicleManager>(TEXT("SBZVehicleManager"));
    this->MarkerManager = CreateDefaultSubobject<USBZMarkerManager>(TEXT("SBZMarkerManager"));
    this->LifeActionManager = CreateDefaultSubobject<USBZLifeActionManager>(TEXT("SBZLifeActionManager"));
    this->ActorPoolManager = CreateDefaultSubobject<USBZActorPoolManager>(TEXT("SBZActorPoolManager"));
    this->SmallTalkManager = CreateDefaultSubobject<USBZSmallTalkManager>(TEXT("SBZSmallTalkManager"));
    this->WindManager = CreateDefaultSubobject<USBZWindManager>(TEXT("SBZWindManager"));
    this->StateMachineSharedState = CreateDefaultSubobject<USBZStateMachineSharedState>(TEXT("SBZStateMachineSharedState"));
    this->bPlayerFriendlyFire = false;
    this->PlayersInEscapeVolume = 0;
    this->PlayersRequiredInEscapeVolume = 0;
    this->EscapeTimeLeft = 0;
    this->KillingSpreeAmount = 5;
    this->DropKillingSpreeWaitTime = 2.00f;
    this->MaxQueuedCosmeticDestruction = 10;
    this->SeasonalEventItemCount = 0;
    this->DSChallengeManager = NULL;
    this->OverkillWeaponCooldown = 45.00f;
    this->TutorialPlayerCharacterData = NULL;
    this->bIsAmmoSpecialistHighGrainSkillActive = false;
    this->AmmoSpecialistHighGrainSkillTime = -1.00f;
    this->bIsIntroSequenceSkipped = false;
    this->WeaponArmorPenetrationModifier = 0.00f;
}

void ASBZMissionState::ServerPostOnTakenDamageEvent(const FSBZDamageEvent& DamageEventData) {
}

void ASBZMissionState::RewardCompleteExperienceObjective(const FString& ObjectName) {
}

void ASBZMissionState::RewardCompleteExperienceMilestone(const FString& MilestoneName) {
}

void ASBZMissionState::ResetPreplanningAssets() {
}

void ASBZMissionState::RemovePreplanningAsset(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZMissionState::PlayerStateRemovedDuringEndMission(const FSBZPlayerStateRemovedEvent& Data) {
}

void ASBZMissionState::OnStandaloneNetIDEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ASBZMissionState::OnServerPowerUpPickedUp(ASBZPowerUp* PowerUp) {
}

void ASBZMissionState::OnSecurityCompaniesChanged() {
}

void ASBZMissionState::OnRep_ServerChangelist() {
}

void ASBZMissionState::OnRep_RandomSeed() {
}

void ASBZMissionState::OnRep_PreplanningAssetsApplied() {
}

void ASBZMissionState::OnRep_PlayersRequiredInEscapeVolume() {
}

void ASBZMissionState::OnRep_PlayersInEscapeVolume() {
}

void ASBZMissionState::OnRep_IsIntroSequenceSkipped() {
}

void ASBZMissionState::OnRep_EscapeTimeLeft() {
}

void ASBZMissionState::OnRep_Difficulty() {
}

void ASBZMissionState::OnRep_BlockedBagMarkers() {
}

void ASBZMissionState::OnInstantLootTaken(const FString& LootName) {
}

void ASBZMissionState::OnBlackScreenStarted() {
}

void ASBZMissionState::OnAmmoSpecialistHighGrainSkillTimeChanged(float OldTime) {
}

void ASBZMissionState::OnActionPhaseStarted() {
}

void ASBZMissionState::OnActionPhaseExited() {
}

void ASBZMissionState::NotifyClientPassedMilestone_Implementation(ESBZMilestoneType MilestoneType, const FString& MilestoneName) {
}

void ASBZMissionState::Multicast_StartOverkillCooldown_Implementation() {
}

void ASBZMissionState::Multicast_SkipIntroSequence_Implementation() {
}

void ASBZMissionState::Multicast_SetEscapeVolumeData_Implementation(const uint8 InPlayersInVolume, const uint8 InTotal) {
}

void ASBZMissionState::Multicast_SetEscapeTimeLeft_Implementation(const int32 NewTime) {
}

void ASBZMissionState::Multicast_SetBlockedBagMarkers_Implementation(const FGameplayTagContainer& InBlockedBagMarkers) {
}

void ASBZMissionState::Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Implementation() {
}

void ASBZMissionState::Multicast_OnAmmoSpecialistHighGrainSkillActivated_Implementation() {
}

void ASBZMissionState::Multicast_MissionResult_Implementation(const FSBZEndMissionResultData& InMissionResultData) {
}

void ASBZMissionState::Multicast_MissionEnd_Implementation(const int32 OutroVariation) {
}

bool ASBZMissionState::IsTutorialLevel() const {
    return false;
}

bool ASBZMissionState::IsFBIActive(const UObject* WorldContextObject) {
    return false;
}

bool ASBZMissionState::HasSharedKeyItemTag(FGameplayTag InTag) const {
    return false;
}

bool ASBZMissionState::HasPreplanningTag(const FGameplayTag& InTag, const UObject* WorldContextObject) {
    return false;
}

bool ASBZMissionState::HasAttributedAllVariations(const USBZVariationSetData* VariationData) const {
    return false;
}

void ASBZMissionState::HandleSharedKeyItemTagChanged(const FGameplayTag Tag, int32 Count) {
}

TArray<ESBZSecurityCompany> ASBZMissionState::GetSecurityCompanies() const {
    return TArray<ESBZSecurityCompany>();
}

ASBZMissionState* ASBZMissionState::GetSBZMissionState(const UObject* WorldContextObject) {
    return NULL;
}

int32 ASBZMissionState::GetRandomSeed() const {
    return 0;
}

FRandomStream ASBZMissionState::GetMixedRandomStream(int32 MixSeed, const UObject* WorldContextObject) {
    return FRandomStream{};
}

int32 ASBZMissionState::GetMixedRandomSeed(int32 MixSeed) const {
    return 0;
}

float ASBZMissionState::GetMissionTime() const {
    return 0.0f;
}

FSBZEndMissionResultData ASBZMissionState::GetMissionResultData() const {
    return FSBZEndMissionResultData{};
}

ESBZEndMissionResult ASBZMissionState::GetMissionResult() const {
    return ESBZEndMissionResult::Fail;
}

uint8 ASBZMissionState::GetDifficultyIdx() const {
    return 0;
}

ESBZDifficulty ASBZMissionState::GetDifficulty() const {
    return ESBZDifficulty::Default;
}

int32 ASBZMissionState::GetCharacterSeed(const ASBZCharacter* Character, int32 MixSeed) {
    return 0;
}


void ASBZMissionState::ApplyPreplanningAssets() {
}

bool ASBZMissionState::AddPreplanningAsset(const FUniqueNetIdRepl& InPlayerId, const FString& InSkuNo) {
    return false;
}

void ASBZMissionState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZMissionState, RandomSeed);
    DOREPLIFETIME(ASBZMissionState, ServerChangelist);
    DOREPLIFETIME(ASBZMissionState, Difficulty);
    DOREPLIFETIME(ASBZMissionState, SecurityCompanies);
    DOREPLIFETIME(ASBZMissionState, ReplicatedSharedKeyItemTagCount);
    DOREPLIFETIME(ASBZMissionState, MissionStartTime);
    DOREPLIFETIME(ASBZMissionState, BlockedBagMarkers);
    DOREPLIFETIME(ASBZMissionState, PlayersInEscapeVolume);
    DOREPLIFETIME(ASBZMissionState, PlayersRequiredInEscapeVolume);
    DOREPLIFETIME(ASBZMissionState, EscapeTimeLeft);
    DOREPLIFETIME(ASBZMissionState, PreplanningAssets);
    DOREPLIFETIME(ASBZMissionState, AmmoSpecialistHighGrainSkillTime);
    DOREPLIFETIME(ASBZMissionState, bIsIntroSequenceSkipped);
}


