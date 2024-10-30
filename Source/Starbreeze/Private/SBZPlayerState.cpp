#include "SBZPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "SBZPlayerAbilitySystemComponent.h"
#include "SBZPlayerAttributeSet.h"
#include "SBZUICharacterEffectComponent.h"

ASBZPlayerState::ASBZPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReadyStatus = EPlayerReadyStatusValue::Loading;
    this->InfamyLevel = 1;
    this->Platform = ESBZPlatform::Unknown;
    this->FirstPartyPlatform = ESBZFirstPartyPlatform::Unknown;
    this->ProgressionSaveGame = NULL;
    this->ProgressionSaveChallenges = NULL;
    this->bIsSkipIntroSequence = false;
    this->AttributeSet = CreateDefaultSubobject<USBZPlayerAttributeSet>(TEXT("SBZPlayerAttributeSet"));
    this->AbilitySystem = CreateDefaultSubobject<USBZPlayerAbilitySystemComponent>(TEXT("SBZPlayerAbilitySystemComponent"));
    this->UICharacterEffects = CreateDefaultSubobject<USBZUICharacterEffectComponent>(TEXT("SBZUICharacterEffectComponent"));
    this->PlayerSlotId = 0;
    this->PlayerColors.AddDefaulted(4);
    this->ReplicatedStartReplenishDodgeServerTime = -1.00f;
    this->StartReplenishDodgeServerTime = -1.00f;
    this->StartReplenishDodgeValue = -1.00f;
    this->bIsMaskOn = false;
    this->bIsLocallyControlled = false;
    this->EquipStateAndIndex = 0;
    this->CharacterClass = NULL;
    this->bIsValidLoadout = false;
    this->DefeatState = EPD3DefeatState::None;
    this->OnKillNetID = 0;
    this->MiniGameState = EPD3MiniGameState::None;
    this->bIsNetInitialized = false;
    this->bIsAttributeSetInitialized = false;
    this->bIsAttributeSetInitializedOnce = false;
    this->bIsPendingReconnectData = false;
    this->bIsLoadoutLoaded = false;
    this->bIsApplyingLoadout = false;
    this->CurrentCharacterData = NULL;
    this->AppliedLoadoutArmorData = NULL;
    this->PlayerMicroCamera = NULL;
    this->bIsSaveLoadoutPending = false;
    this->SpectateDurationArray[0] = 60.00f;
    this->SpectateDurationArray[1] = 60.00f;
    this->SpectateDurationArray[2] = 60.00f;
    this->SpectateDurationArray[3] = 60.00f;
    this->ReconnectDefeatedCustodyDurationReductionArray[0] = 30.00f;
    this->ReconnectDefeatedCustodyDurationReductionArray[1] = 30.00f;
    this->ReconnectDefeatedCustodyDurationReductionArray[2] = 30.00f;
    this->ReconnectDefeatedCustodyDurationReductionArray[3] = 30.00f;
    this->MinimumSpectateDuration = 10.00f;
    this->SpectateTime = -1.00f;
    this->ReducedCustodyTime = 0.00f;
    this->SpectateDurationModification = 0.00f;
    this->ECMGUIEffectData = NULL;
    this->PrecisionShotGUIEffectData = NULL;
    this->SkillTankDisengageActivatedTimeSeconds = -1.00f;
    this->SurrenderedEnemy = NULL;
    this->EnforcerSkillKillCount = 0;
    this->EnforcerSkillLastKillTime = 0.00f;
    this->EnforcerAcedSkillKillCount = 0;
    this->OverkillWeaponProgress = 0.00f;
    this->OverkillWeaponProgressKillIncrease = 1.00f;
    this->OverkillWeaponProgressHeadshotAdditionalIncrease = 1.00f;
    this->OverkillWeaponProgressObjectiveIncrease = 5.00f;
    this->OverkillWeaponProgressSubObjectiveIncrease = 2.50f;
    this->bIsLastArrestedByGuard = false;
    this->bIsTargeting = false;
    this->CustodyCount = 0;
    this->CustodyReleaseCost = 1;
    this->CurrentTradeReduction = 0;
    this->bServerIsHardBargainCustody = false;
    this->bIsMergePartySelected = false;
    this->PickupConsumableCooldownTime = 0.80f;
}

void ASBZPlayerState::SetSkipIntroSequence(bool bInIsSkipIntroSequence) {
}

void ASBZPlayerState::Server_VoiceSessionLeft_Implementation() {
}

void ASBZPlayerState::Server_VoiceSessionJoined_Implementation() {
}

void ASBZPlayerState::Server_VoiceSessionCreateFailed_Implementation() {
}

void ASBZPlayerState::Server_VoiceSessionCreated_Implementation(const FString& SessionId) {
}

void ASBZPlayerState::Server_UpdateGameSession_Implementation() {
}

void ASBZPlayerState::Server_StopTargeting_Implementation() {
}

void ASBZPlayerState::Server_StartTargeting_Implementation() {
}

void ASBZPlayerState::Server_SetSkipIntroSequence_Implementation(bool bInIsSkipIntroSequence) {
}

void ASBZPlayerState::Server_SetMiniGameState_Implementation(EPD3MiniGameState InMiniGameState) {
}

void ASBZPlayerState::Server_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex) {
}

void ASBZPlayerState::Server_SetEOSProductUserId_Implementation(const FString& InEOSProductUserId) {
}

void ASBZPlayerState::Server_SetDropPlaceableEquippableData_Implementation(const FSBZDropPlaceableEquippableData& Data) {
}

void ASBZPlayerState::Server_RequestVoiceSessionLeave_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZPlayerState::Server_RequestVoiceSessionJoin_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZPlayerState::Server_PickupAmmo_Implementation(uint32 ID, bool bIsSimulatedPickup) {
}

void ASBZPlayerState::Server_DebugConsoleCommand_Implementation(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, bool bIsExecutedOnAll, int32 PlayerIndex) {
}

void ASBZPlayerState::Server_CheatSetLoadout_Implementation(const FPD3PlayerLoadout& InLoadout) {
}
bool ASBZPlayerState::Server_CheatSetLoadout_Validate(const FPD3PlayerLoadout& InLoadout) {
    return true;
}

void ASBZPlayerState::OnSpectateDurationModificationChanged(float OldDuration) {
}

void ASBZPlayerState::OnRuntimeSecureLoopExpired(AActor* InRuntimeActor) {
}

void ASBZPlayerState::OnRuntimeScramblerExpired(AActor* InRuntimeActor) {
}

void ASBZPlayerState::OnRuntimeRoutedPingExpired(AActor* InRuntimeActor) {
}

void ASBZPlayerState::OnRuntimeActorEndPlay(AActor* RuntimeActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ASBZPlayerState::OnRuntimeActorDestroyed(AActor* InRuntimeActor) {
}

void ASBZPlayerState::OnRep_SpectateTime(float OldSpectateTime) {
}

void ASBZPlayerState::OnRep_ServerReloadState() {
}

void ASBZPlayerState::OnRep_ReplicatedStartReplenishDodgeServerTime() {
}

void ASBZPlayerState::OnRep_ReadyStatus() {
}

void ASBZPlayerState::OnRep_Platform() {
}

void ASBZPlayerState::OnRep_OverkillWeaponProgress() {
}

void ASBZPlayerState::OnRep_OnKillNetID() {
}

void ASBZPlayerState::OnRep_MiniGameState(EPD3MiniGameState OldMiniGameState) {
}

void ASBZPlayerState::OnRep_MergePartySelected() {
}

void ASBZPlayerState::OnRep_Loadout(const FPD3PlayerLoadout& InOldLoadout) {
}

void ASBZPlayerState::OnRep_IsTargeting() {
}

void ASBZPlayerState::OnRep_IsMaskOn() {
}

void ASBZPlayerState::OnRep_InfamyLevel() {
}

void ASBZPlayerState::OnRep_FirstPartyPlatform() {
}

void ASBZPlayerState::OnRep_EquipStateAndIndex(uint8 OldEquipStateAndIndex) {
}

void ASBZPlayerState::OnRep_EOSProductUserId(const FString& OldEOSProductUserId) {
}

void ASBZPlayerState::OnRep_DefeatState(EPD3DefeatState OldDefeatState) {
}

void ASBZPlayerState::OnRep_CustodyReleaseCost() {
}

void ASBZPlayerState::OnRep_CustodyCharacterClass() {
}

void ASBZPlayerState::OnRep_AccelByteUserName() {
}

void ASBZPlayerState::OnRep_AccelByteUserId(const FString& OldAccelByteUserId) {
}

void ASBZPlayerState::OnRep_AccelByteDisplayName() {
}

void ASBZPlayerState::OnIsSkipIntroSequenceChanged() {
}

void ASBZPlayerState::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void ASBZPlayerState::MulticastNotifyClientsHostRestart_Implementation(int32 ServerRestartTimeInSeconds) {
}

void ASBZPlayerState::Multicast_StopTargeting_Implementation() {
}

void ASBZPlayerState::Multicast_StartTargeting_Implementation() {
}

void ASBZPlayerState::Multicast_StartDodgeReplenish_Implementation(float InStartReplenishDodgeServerTime) {
}

void ASBZPlayerState::Multicast_SetSpectateTime_Implementation(float Time) {
}

void ASBZPlayerState::Multicast_SetSpectateDurationModification_Implementation(float Duration) {
}

void ASBZPlayerState::Multicast_SetSkipIntroSequence_Implementation(bool bInIsSkipIntroSequence) {
}

void ASBZPlayerState::Multicast_SetServerReloadState_Implementation(const FSBZReplicatedReloadState& InServerReloadState) {
}

void ASBZPlayerState::Multicast_SetPlayerSlotId_Implementation(uint8 NewSlotId) {
}

void ASBZPlayerState::Multicast_SetPlayerId_Implementation(int32 InPlayerId) {
}

void ASBZPlayerState::Multicast_SetMiniGameState_Implementation(EPD3MiniGameState InMiniGameState, ASBZPlayerState* InWinningParticipant) {
}

void ASBZPlayerState::Multicast_SetLoadout_Implementation(const FPD3PlayerLoadout& InLoadout) {
}

void ASBZPlayerState::Multicast_SetLastArrestedByGuard_Implementation(bool bInIsLastArrestedByGuard) {
}

void ASBZPlayerState::Multicast_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex) {
}

void ASBZPlayerState::Multicast_SetEOSProductUserId_Implementation(const FString& InEOSProductUserId) {
}

void ASBZPlayerState::Multicast_SetDefeatState_Implementation(EPD3DefeatState InDefeatState) {
}

void ASBZPlayerState::Multicast_SetCustodyCharacterClass_Implementation(FSoftObjectPath InCharacterClass) {
}

void ASBZPlayerState::Multicast_SetAccelByteUserName_Implementation(const FString& InAccelByteUserName) {
}

void ASBZPlayerState::Multicast_SetAccelByteUserId_Implementation(const FString& InAccelByteUserId) {
}

void ASBZPlayerState::Multicast_RejectEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex) {
}

void ASBZPlayerState::Multicast_OnKill_Implementation(uint32 NetID) {
}

void ASBZPlayerState::Multicast_DebugConsoleCommand_Implementation(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, int32 PlayerIndex) {
}

bool ASBZPlayerState::IsSkipIntroSequence() const {
    return false;
}

bool ASBZPlayerState::IsPlayerDisplayNameReady() const {
    return false;
}

FText ASBZPlayerState::GetPlayerDisplayName() const {
    return FText::GetEmpty();
}

ESBZPlatform ASBZPlayerState::GetPlatform() const {
    return ESBZPlatform::Unknown;
}

bool ASBZPlayerState::GetMergePartySelected() const {
    return false;
}

int32 ASBZPlayerState::GetInfamyLevel() const {
    return 0;
}

FString ASBZPlayerState::GetEOSProductUserId() const {
    return TEXT("");
}

UPaperSprite* ASBZPlayerState::GetCharacterIcon() const {
    return NULL;
}

FString ASBZPlayerState::GetAccelBytePlayerName() const {
    return TEXT("");
}

void ASBZPlayerState::EquipToolToLoadout(USBZToolData* ItemToEquip) {
}

void ASBZPlayerState::EquipThrowableToLoadout(USBZThrowableData* ItemToEquip) {
}

void ASBZPlayerState::EquipPlaceableToLoadout(USBZPlaceableData* ItemToEquip) {
}

void ASBZPlayerState::EquipMaskToLoadout(USBZMaskData* ItemToEquip) {
}

void ASBZPlayerState::EquipEquippableToLoadoutAt(const USBZEquippableData* EquippableToEquip, int32 Index) {
}

void ASBZPlayerState::EquipCuttingToolToLoadout(USBZToolCuttingData* ItemToEquip) {
}

UAbilitySystemComponent* ASBZPlayerState::GetAbilitySystemComponent() const
{
    return nullptr;
}

void ASBZPlayerState::Client_SetSurrenderedEnemy_Implementation(ASBZAICharacter* InSurrenderedEnemy) {
}

void ASBZPlayerState::Client_SetReducedCustodyTime_Implementation(float InReducedCustodyTime) {
}

void ASBZPlayerState::Client_SetCustodyReleaseCost_Implementation(int32 InNewCustodyReleaseCost) {
}

void ASBZPlayerState::Client_SendPlayerReloadProgressionSaveGame_Implementation() {
}

void ASBZPlayerState::Client_SendOverkillWeaponProgress_Implementation(float InOverkillWeaponProgress) {
}

void ASBZPlayerState::Client_PickupAmmo_Implementation(uint32 ID) {
}

void ASBZPlayerState::Client_OnSaveLoadoutPending_Implementation() {
}

void ASBZPlayerState::Client_LeaveVoiceSession_Implementation() {
}

void ASBZPlayerState::Client_JoinVoiceSession_Implementation(const FSBZVoiceSessionData& VoiceSessionData) {
}

void ASBZPlayerState::Client_DestroyVoiceSession_Implementation() {
}

void ASBZPlayerState::Client_CreateVoiceSession_Implementation() {
}

void ASBZPlayerState::Client_CheatSetInfiniteAmmo_Implementation(bool bInHasInifiniteAmmo) {
}

void ASBZPlayerState::Client_ChallengeCompleted_Implementation(const FChallengeNotifPayload& ChallengeNotifPayload) {
}

void ASBZPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerState, ReadyStatus);
    DOREPLIFETIME(ASBZPlayerState, InfamyLevel);
    DOREPLIFETIME(ASBZPlayerState, Platform);
    DOREPLIFETIME(ASBZPlayerState, FirstPartyPlatform);
    DOREPLIFETIME(ASBZPlayerState, AccelByteDisplayName);
    DOREPLIFETIME(ASBZPlayerState, AccelByteUserName);
    DOREPLIFETIME(ASBZPlayerState, AccelByteUserId);
    DOREPLIFETIME(ASBZPlayerState, EOSProductUserId);
    DOREPLIFETIME(ASBZPlayerState, bIsSkipIntroSequence);
    DOREPLIFETIME(ASBZPlayerState, PlayerSlotId);
    DOREPLIFETIME(ASBZPlayerState, ReplicatedStartReplenishDodgeServerTime);
    DOREPLIFETIME(ASBZPlayerState, bIsMaskOn);
    DOREPLIFETIME(ASBZPlayerState, Loadout);
    DOREPLIFETIME(ASBZPlayerState, EquipStateAndIndex);
    DOREPLIFETIME(ASBZPlayerState, ServerReloadState);
    DOREPLIFETIME(ASBZPlayerState, CustodyCharacterClass);
    DOREPLIFETIME(ASBZPlayerState, DefeatState);
    DOREPLIFETIME(ASBZPlayerState, OnKillNetID);
    DOREPLIFETIME(ASBZPlayerState, MiniGameState);
    DOREPLIFETIME(ASBZPlayerState, PlaceableToolsArray);
    DOREPLIFETIME(ASBZPlayerState, SpectateTime);
    DOREPLIFETIME(ASBZPlayerState, ReducedCustodyTime);
    DOREPLIFETIME(ASBZPlayerState, SpectateDurationModification);
    DOREPLIFETIME(ASBZPlayerState, OverkillWeaponProgress);
    DOREPLIFETIME(ASBZPlayerState, bIsLastArrestedByGuard);
    DOREPLIFETIME(ASBZPlayerState, bIsTargeting);
    DOREPLIFETIME(ASBZPlayerState, CustodyReleaseCost);
    DOREPLIFETIME(ASBZPlayerState, bIsMergePartySelected);
}


