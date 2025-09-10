#include "SBZPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "SBZPlayerAbilitySystemComponent.h"
#include "SBZPlayerAttributeSet.h"
#include "SBZUICharacterEffectComponent.h"

ASBZPlayerState::ASBZPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InfamyLevel = 1;
    this->RenownLevel = 0;
    this->Platform = ESBZPlatform::Unknown;
    this->FirstPartyPlatform = ESBZFirstPartyPlatform::Unknown;
    this->ProgressionSaveGame = NULL;
    this->ProgressionSaveChallenges = NULL;
    this->bIsSkipIntroSequence = false;
    this->DefensiveMeasuresCount = 0;
    this->AttributeSet = CreateDefaultSubobject<USBZPlayerAttributeSet>(TEXT("SBZPlayerAttributeSet"));
    this->AbilitySystem = CreateDefaultSubobject<USBZPlayerAbilitySystemComponent>(TEXT("SBZPlayerAbilitySystemComponent"));
    this->UICharacterEffects = CreateDefaultSubobject<USBZUICharacterEffectComponent>(TEXT("SBZUICharacterEffectComponent"));
    this->PlayerSlotId = 0;
    this->PlayerColors.AddDefaulted(4);
    this->bIsMaskOn = false;
    this->bIsLocallyControlled = false;
    this->EquipStateAndIndex = 0;
    this->ReloadEndTime = -1.00f;
    this->CharacterClass = NULL;
    this->bIsValidLoadout = false;
    this->DefeatState = EPD3DefeatState::None;
    this->OnKillNetID = 0;
    this->MiniGameState = EPD3MiniGameState::None;
    this->bIsNetInitialized = false;
    this->bIsAttributeSetInitialized = false;
    this->bIsAttributeSetInitializedOnce = false;
    this->bIsPendingReconnectData = false;
    this->bIsPendingInitRespawnAttributeSet = false;
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
    this->ArmorReductionGUIEffectData = NULL;
    this->SkillTankDisengageActivatedTimeSeconds = -1.00f;
    this->SurrenderedEnemy = NULL;
    this->EnforcerSkillKillCount = 0;
    this->EnforcerSkillLastKillTime = 0.00f;
    this->EnforcerAcedSkillKillCount = 0;
    this->bIsFirstOverkillWeaponEquip = true;
    this->OverkillInstantLootIncrease = 1.00f;
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
    this->bIsOverskillEnabled = true;
    this->bIsOverskillLoadoutTicking = false;
    this->bIsMergePartySelected = false;
    this->PickupConsumableCooldownTime = 0.80f;
    this->OverskillDamageModifier[0] = 1.00f;
    this->OverskillDamageModifier[1] = 1.00f;
    this->OverskillDamageModifier[2] = 1.00f;
    this->OverskillDamageModifier[3] = 1.00f;
    this->ConstantFlowCount = 0;
    this->SMGMasterCount = 0;
    this->bIsSmokeMasterEnabled = false;
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

void ASBZPlayerState::Server_RequestVoiceSessionJoin_Implementation(const FUniqueNetIdRepl& InPlayerId, bool bMakeVoiceEnabled) {
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

void ASBZPlayerState::OnRep_SMGMasterCount(uint8 OldCount) {
}

void ASBZPlayerState::OnRep_ServerReloadState(const FSBZReplicatedReloadState& OldServerReloadState) {
}

void ASBZPlayerState::OnRep_RenownLevel() {
}

void ASBZPlayerState::OnRep_Platform() {
}

void ASBZPlayerState::OnRep_PlaceableToolsArray() {
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

void ASBZPlayerState::OnRep_IsSmokeMasterEnabled() {
}

void ASBZPlayerState::OnRep_IsOverskillEnabled() {
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

void ASBZPlayerState::OnRep_ConstantFlowCount(uint16 OldCount) {
}

void ASBZPlayerState::OnRep_AccelByteUserName() {
}

void ASBZPlayerState::OnRep_AccelByteUserId(const FString& OldAccelByteUserId) {
}

void ASBZPlayerState::OnRep_AccelByteDisplayName() {
}

void ASBZPlayerState::OnIsSkipIntroSequenceChanged() {
}

void ASBZPlayerState::OnIsOverskillLoadoutTickingChanged() {
}

void ASBZPlayerState::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void ASBZPlayerState::OnDefensiveMeasuresCountChanged() {
}

void ASBZPlayerState::MulticastReceiveLocalizedChatMessage_Implementation(const FString& TableId, const FString& LocaleKey) {
}

void ASBZPlayerState::MulticastNotifyClientsHostRestart_Implementation(int32 ServerRestartTimeInSeconds) {
}

void ASBZPlayerState::Multicast_StopTargeting_Implementation() {
}

void ASBZPlayerState::Multicast_StartTargeting_Implementation() {
}

void ASBZPlayerState::Multicast_SmokeMasterEnabled_Implementation() {
}

void ASBZPlayerState::Multicast_SmokeMasterDisabled_Implementation() {
}

void ASBZPlayerState::Multicast_SetSpectateTime_Implementation(float Time) {
}

void ASBZPlayerState::Multicast_SetSpectateDurationModification_Implementation(float Duration) {
}

void ASBZPlayerState::Multicast_SetSMGMasterCount_Implementation(uint8 Count) {
}

void ASBZPlayerState::Multicast_SetSkipIntroSequence_Implementation(bool bInIsSkipIntroSequence) {
}

void ASBZPlayerState::Multicast_SetServerReloadState_Implementation(const FSBZReplicatedReloadState& InServerReloadState) {
}

void ASBZPlayerState::Multicast_SetRenownLevel_Implementation(const int32 InRenownLevel) {
}

void ASBZPlayerState::Multicast_SetPlayerSlotId_Implementation(uint8 NewSlotId) {
}

void ASBZPlayerState::Multicast_SetPlayerId_Implementation(int32 InPlayerId) {
}

void ASBZPlayerState::Multicast_SetPlatform_Implementation(const ESBZPlatform InPlatform) {
}

void ASBZPlayerState::Multicast_SetOverskillLoadoutTicking_Implementation(bool bInIsTicking) {
}

void ASBZPlayerState::Multicast_SetOverskillEnabled_Implementation(bool bInIsEnabled) {
}

void ASBZPlayerState::Multicast_SetMiniGameState_Implementation(EPD3MiniGameState InMiniGameState, ASBZPlayerState* InWinningParticipant) {
}

void ASBZPlayerState::Multicast_SetMergePartySelected_Implementation(const bool bIsSelected) {
}

void ASBZPlayerState::Multicast_SetLoadout_Implementation(const FPD3PlayerLoadout& InLoadout) {
}

void ASBZPlayerState::Multicast_SetLastArrestedByGuard_Implementation(bool bInIsLastArrestedByGuard) {
}

void ASBZPlayerState::Multicast_SetInfamyLevel_Implementation(const int32 InInfamyLevel) {
}

void ASBZPlayerState::Multicast_SetFirstPartyPlatform_Implementation(const ESBZFirstPartyPlatform InFirstPartyPlatform) {
}

void ASBZPlayerState::Multicast_SetFirstOverkillWeaponEquip_Implementation(bool bIsFirstEquip) {
}

void ASBZPlayerState::Multicast_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex) {
}

void ASBZPlayerState::Multicast_SetEOSProductUserId_Implementation(const FString& InEOSProductUserId) {
}

void ASBZPlayerState::Multicast_SetDefeatState_Implementation(EPD3DefeatState InDefeatState) {
}

void ASBZPlayerState::Multicast_SetAccelByteUserName_Implementation(const FString& InAccelByteUserName) {
}

void ASBZPlayerState::Multicast_SetAccelByteUserId_Implementation(const FString& InAccelByteUserId) {
}

void ASBZPlayerState::Multicast_SetAccelByteDisplayName_Implementation(const FString& InDisplayName) {
}

void ASBZPlayerState::Multicast_RejectEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex) {
}

void ASBZPlayerState::Multicast_OnKill_Implementation(uint32 NetID) {
}

void ASBZPlayerState::Multicast_OnConstantFlowReset_Implementation() {
}

void ASBZPlayerState::Multicast_DefensiveMeasuresCount_Implementation(uint8 InDefensiveMeasuresCount) {
}

void ASBZPlayerState::Multicast_DebugSyncServerResultData_Implementation(const FSBZPlayerEndMissionResultData& Data) {
}

void ASBZPlayerState::Multicast_DebugConsoleCommand_Implementation(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, int32 PlayerIndex) {
}

bool ASBZPlayerState::IsStillInP2PSession() const {
    return false;
}

bool ASBZPlayerState::IsSkipIntroSequence() const {
    return false;
}

bool ASBZPlayerState::IsPlayerDisplayNameReady() const {
    return false;
}

int32 ASBZPlayerState::GetRenownLevel() const {
    return 0;
}

FText ASBZPlayerState::GetPlayerDisplayName() const {
    return FText::GetEmpty();
}

ESBZPlatform ASBZPlayerState::GetPlatform() const {
    return ESBZPlatform::Unknown;
}

TArray<FSBZOverskillProgressResultData> ASBZPlayerState::GetOverskillProgressResultData(const TArray<FName>& InProgressLevelIDArray) const {
    return TArray<FSBZOverskillProgressResultData>();
}

float ASBZPlayerState::GetOverskillProgress(const FName& InProgressLevelID) const {
    return 0.0f;
}

bool ASBZPlayerState::GetMergePartySelected() const {
    return false;
}

UPaperSprite* ASBZPlayerState::GetMaskedOnIcon() const {
    return NULL;
}

UPaperSprite* ASBZPlayerState::GetMaskedOffIcon() const {
    return NULL;
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

void ASBZPlayerState::Client_SetSurrenderedEnemy_Implementation(ASBZAICharacter* InSurrenderedEnemy) {
}

void ASBZPlayerState::Client_SetReducedCustodyTime_Implementation(float InReducedCustodyTime) {
}

void ASBZPlayerState::Client_SetCustodyReleaseCost_Implementation(int32 InNewCustodyReleaseCost) {
}

void ASBZPlayerState::Client_SendPlayerReloadProgressionSaveGame_Implementation() {
}

void ASBZPlayerState::Client_PickupAmmo_Implementation(uint32 ID) {
}

void ASBZPlayerState::Client_OnSaveLoadoutPending_Implementation() {
}

void ASBZPlayerState::Client_LeaveVoiceSession_Implementation() {
}

void ASBZPlayerState::Client_JoinVoiceSession_Implementation(const FSBZVoiceSessionData& VoiceSessionData) {
}

void ASBZPlayerState::Client_IncrementStatsArray_Implementation(const TArray<FAccelByteModelsBulkStatItemInc>& InArray) {
}

void ASBZPlayerState::Client_IncrementStat_Implementation(const FString& InStatCode, float InIncrement) {
}

void ASBZPlayerState::Client_DestroyVoiceSession_Implementation() {
}

void ASBZPlayerState::Client_CreateVoiceSession_Implementation() {
}

void ASBZPlayerState::Client_CheatSetInfiniteAmmo_Implementation(bool bInHasInifiniteAmmo) {
}

void ASBZPlayerState::Client_ChallengeCompleted_Implementation(const FSBZInternalChallengeNotifPayload& ChallengeNotifPayload) {
}

void ASBZPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerState, InfamyLevel);
    DOREPLIFETIME(ASBZPlayerState, RenownLevel);
    DOREPLIFETIME(ASBZPlayerState, Platform);
    DOREPLIFETIME(ASBZPlayerState, FirstPartyPlatform);
    DOREPLIFETIME(ASBZPlayerState, AccelByteDisplayName);
    DOREPLIFETIME(ASBZPlayerState, AccelByteUserName);
    DOREPLIFETIME(ASBZPlayerState, AccelByteUserId);
    DOREPLIFETIME(ASBZPlayerState, EOSProductUserId);
    DOREPLIFETIME(ASBZPlayerState, bIsSkipIntroSequence);
    DOREPLIFETIME(ASBZPlayerState, DefensiveMeasuresCount);
    DOREPLIFETIME(ASBZPlayerState, PlayerSlotId);
    DOREPLIFETIME(ASBZPlayerState, bIsMaskOn);
    DOREPLIFETIME(ASBZPlayerState, Loadout);
    DOREPLIFETIME(ASBZPlayerState, EquipStateAndIndex);
    DOREPLIFETIME(ASBZPlayerState, ServerReloadState);
    DOREPLIFETIME(ASBZPlayerState, ReloadEndTime);
    DOREPLIFETIME(ASBZPlayerState, CustodyCharacterClass);
    DOREPLIFETIME(ASBZPlayerState, DefeatState);
    DOREPLIFETIME(ASBZPlayerState, OnKillNetID);
    DOREPLIFETIME(ASBZPlayerState, MiniGameState);
    DOREPLIFETIME(ASBZPlayerState, PlaceableToolsArray);
    DOREPLIFETIME(ASBZPlayerState, SpectateTime);
    DOREPLIFETIME(ASBZPlayerState, ReducedCustodyTime);
    DOREPLIFETIME(ASBZPlayerState, SpectateDurationModification);
    DOREPLIFETIME(ASBZPlayerState, bIsFirstOverkillWeaponEquip);
    DOREPLIFETIME(ASBZPlayerState, bIsLastArrestedByGuard);
    DOREPLIFETIME(ASBZPlayerState, bIsTargeting);
    DOREPLIFETIME(ASBZPlayerState, CustodyReleaseCost);
    DOREPLIFETIME(ASBZPlayerState, bIsOverskillEnabled);
    DOREPLIFETIME(ASBZPlayerState, bIsOverskillLoadoutTicking);
    DOREPLIFETIME(ASBZPlayerState, bIsMergePartySelected);
    DOREPLIFETIME(ASBZPlayerState, ConstantFlowCount);
    DOREPLIFETIME(ASBZPlayerState, SMGMasterCount);
    DOREPLIFETIME(ASBZPlayerState, bIsSmokeMasterEnabled);
}


UAbilitySystemComponent* ASBZPlayerState::GetAbilitySystemComponent() const {
  return nullptr;
}
