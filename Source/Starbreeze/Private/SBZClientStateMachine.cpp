#include "SBZClientStateMachine.h"

void USBZClientStateMachine::RequestTravelToServer() {
}

void USBZClientStateMachine::RequestSteamLogin() {
}

void USBZClientStateMachine::RequestSoloGame(int32 LevelIdx, int32 DifficultyIdx) {
}

void USBZClientStateMachine::RequestReturnToMainMenu(ESBZReturnToMainMenuReason Reason) {
}

void USBZClientStateMachine::RequestReturnToLogin(ESBZReturnToLoginReason Reason) {
}

void USBZClientStateMachine::RequestReturnToIIS(ESBZReturnToIISReason Reason) {
}

void USBZClientStateMachine::RequestRestart() {
}

void USBZClientStateMachine::RequestReplay(const FSBZReplayInfo& ReplayInfo) {
}

void USBZClientStateMachine::RequestPlatformJoin() {
}

void USBZClientStateMachine::RequestP2PHost(const FSBZOnlineMatchmakingParams& MatchmakingParameters) {
}

void USBZClientStateMachine::RequestMissionEnd(const FSBZEndMissionRequestData& RequestData) {
}

void USBZClientStateMachine::RequestMatchmaking(const FSBZOnlineMatchmakingParams& MatchmakingParameters) {
}

void USBZClientStateMachine::RequestLoginWithDeviceID() {
}

void USBZClientStateMachine::RequestLogin(const FSBZLoginFieldInfo& LoginFieldInfo) {
}

void USBZClientStateMachine::RequestGoToLobby() {
}

void USBZClientStateMachine::RequestGameStart() {
}

void USBZClientStateMachine::RequestEndOutroSequence() {
}

void USBZClientStateMachine::RequestEndIntroSequence() {
}

void USBZClientStateMachine::RequestDirectJoin() {
}

void USBZClientStateMachine::RequestDefaultMatchmaking() {
}

void USBZClientStateMachine::RequestCreateAccount(const FSBZRegistrationFieldInfo& RegistrationFieldInfo) {
}

void USBZClientStateMachine::RemoveAppliedPreplanningAsset() {
}

void USBZClientStateMachine::OnUserSwitchDuringInvite() {
}

void USBZClientStateMachine::OnPopUpClosedIsNotPartyLeader(FName ActionName) {
}

void USBZClientStateMachine::OnPartyHostEnteredMatchmaking() {
}

void USBZClientStateMachine::OnPartyHostEnteredMainMenu() {
}

void USBZClientStateMachine::OnPartyHostEnteredLobby() {
}

bool USBZClientStateMachine::isPreMatchAsyncLoadingDone() {
    return false;
}

bool USBZClientStateMachine::IsMatchmakingInProgress() const {
    return false;
}

bool USBZClientStateMachine::HasStartedOutro() const {
    return false;
}

ESBZOnlineSessionPhase USBZClientStateMachine::GetSessionPhase() const {
    return ESBZOnlineSessionPhase::Undefined;
}

FString USBZClientStateMachine::GetCurrentStateNameString() {
    return TEXT("");
}

void USBZClientStateMachine::ApplyPreplanningAsset(const FString& ItemSku) {
}

USBZClientStateMachine::USBZClientStateMachine() {
    this->LoadingScreen = NULL;
}

