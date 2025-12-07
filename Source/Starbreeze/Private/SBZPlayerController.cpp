#include "SBZPlayerController.h"
#include "SBZCheatManager.h"
#include "SBZPlayerCameraManager.h"

ASBZPlayerController::ASBZPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = ASBZPlayerCameraManager::StaticClass();
    this->CheatClass = USBZCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    this->DefeatCameraFeedbackClass = NULL;
    this->MinDefeatCameraFeedbackIntensity = 0.30f;
    this->TasedCameraFeedbackClass = NULL;
    this->SubduedCameraFeedbackClass = NULL;
    this->HealthDamageCameraFeedbackClass = NULL;
    this->HealthDamageCameraFeedbackThreshold = 0.33f;
    this->ViewTargetCameraFeedbackClass = NULL;
    this->DestroyedViewTargetCameraFeedbackClass = NULL;
    this->ChangedViewTargetCameraFeedbackClass = NULL;
    this->CurrentSpectateTargetPlayerID = 0;
    this->AppliedDefeatState = EPD3DefeatState::None;
}

void ASBZPlayerController::SetViewTargetCollection(const TScriptInterface<ISBZViewTargetCollectionInterface>& InViewTargetCollection, int32 Offset) {
}

bool ASBZPlayerController::SetCameraFeedbackIntensity(int32 CameraFeedbackID, float Intensity) {
    return false;
}

void ASBZPlayerController::Server_UnsetViewTargetCollection_Implementation() {
}

void ASBZPlayerController::Server_StayAsPartyDecisionMade_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZPlayerController::Server_SetViewTargetCollection_Implementation(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex) {
}

void ASBZPlayerController::Server_SetCurrentViewTargetIndex_Implementation(int32 InViewTargetIndex) {
}

void ASBZPlayerController::Server_SetCurrentSpectateTargetPlayerID_Implementation(int32 InID) {
}

void ASBZPlayerController::Server_SendPlayerPlayerResultsData_Implementation(const FSBZPlayerEndMissionResultData& InData) {
}

void ASBZPlayerController::Server_RestartRequested_Implementation(const FUniqueNetIdRepl& PlayerID) {
}
bool ASBZPlayerController::Server_RestartRequested_Validate(const FUniqueNetIdRepl& PlayerID) {
    return true;
}

void ASBZPlayerController::Server_RestartLevel_Implementation() {
}

void ASBZPlayerController::Server_PlayerRequestStayAsParty_Implementation(const FUniqueNetIdRepl& InPlayerId, bool bInStayAsParty) {
}

void ASBZPlayerController::Server_HostRestartRequested_Implementation(const FUniqueNetIdRepl& PlayerID) {
}
bool ASBZPlayerController::Server_HostRestartRequested_Validate(const FUniqueNetIdRepl& PlayerID) {
    return true;
}

void ASBZPlayerController::Server_Disband_OnPartyCreated_Implementation(bool bWasSuccessful, const FString& PartyCode, const FString& LeaderID, const TArray<FString>& NonLeaderPartyMembersStillInGameSession) {
}

void ASBZPlayerController::Server_DebugTeleportTo_Implementation(const FVector& Location, const float Yaw) {
}

void ASBZPlayerController::Server_DebugPlayMontage_Implementation(AActor* Actor, UAnimMontage* Montage) {
}

bool ASBZPlayerController::RemoveCameraFeedback(int32 CameraFeedbackID) {
    return false;
}

void ASBZPlayerController::OnPlayerCameraManagerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

TScriptInterface<ISBZViewTargetCollectionInterface> ASBZPlayerController::GetViewTargetCollection() const {
    return NULL;
}

bool ASBZPlayerController::FadeOutCameraFeedback(int32 CameraFeedbackID, bool bIsAutoRemoved) {
    return false;
}

void ASBZPlayerController::ClientReceiveReward_Implementation(const FSBZInternalChallengeNotifPayload& ChallengeReward) {
}

void ASBZPlayerController::Client_UnsetViewTargetCollection_Implementation() {
}

void ASBZPlayerController::Client_StayAsPartyStateUpdated_Implementation(const int32 StayAsPartyPlayerCount) {
}

void ASBZPlayerController::Client_SetViewTargetCollection_Implementation(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex) {
}

void ASBZPlayerController::Client_RestartTimeExpired_Implementation() {
}

void ASBZPlayerController::Client_RestartInitiate_Implementation(float SecondsRemaining) {
}

void ASBZPlayerController::Client_RestartAccepted_Implementation(const FUniqueNetIdRepl& PlayerID) {
}

void ASBZPlayerController::Client_PlayerRequestStayAsPartyAck_Implementation(bool bInStayAsParty) {
}

void ASBZPlayerController::Client_PartyMergeCancelled_Implementation() {
}

void ASBZPlayerController::Client_NotifyMergePartyCompleted_Implementation() {
}

void ASBZPlayerController::Client_LeaveDueToMissingPlayerData_Implementation() {
}

void ASBZPlayerController::Client_JoinMergedParty_Implementation(const FString& InPartyCode) {
}

void ASBZPlayerController::Client_Disband_LeaveJoinParty_Implementation(const FString& PartyCode) {
}

void ASBZPlayerController::Client_Disband_LeaveCreateParty_Implementation(const FString& LeaderID, const TArray<FString>& NonLeaderPartyMembersStillInGameSession) {
}

int32 ASBZPlayerController::ApplyCameraFeedback(FSBZLocalPlayerFeedbackParameters& Parameters) {
    return 0;
}


