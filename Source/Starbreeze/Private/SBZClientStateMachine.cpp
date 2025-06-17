#include "SBZClientStateMachine.h"

#include "SBZClientStateMachineState.h"

#include "SBZStateMachineStateNotLoggedIn.h"
#include "SBZStateMachineStateSubsystemInitialisation.h"
#include "SBZStateMachineStateWaitFirstGameStart.h"
//#include "SBZStateMachineStateWaitPlayGo.h"
#include "SBZStateMachineStateWaitSoloGame.h"
#include "SBZStateMachineStateGameStart.h"
#include "SBZStateMachineStateMatchmaking.h"
#include "SBZStateMachineStateLobby.h"
#include "SBZStateMachineStateP2PHost.h"
#include "SBZStateMachineStateABMatchmaking.h"
#include "SBZStateMachineStateABPreMatch.h"
#include "SBZStateMachineStateWaitingActionPhase.h"
#include "SBZStateMachineStateWaitingActionPhaseHost.h"
#include "SBZStateMachineStateWaitingActionPhaseClient.h"
#include "SBZStateMachineStateWaitingActionPhaseDropIn.h"
#include "SBZStateMachineStateFunctionalTest.h"
#include "SBZStateMachineStateJobOverview.h"
#include "SBZStateMachineStateJobOverviewDropIn.h"
#include "SBZStateMachineStateJobOverviewDirectJoin.h"
#include "SBZStateMachineStateActionPhase.h"
#include "SBZStateMachineStateWaitMainMenu.h"
#include "SBZStateMachineStateResult.h"
#include "SBZStateMachineStateGameError.h"
#include "SBZStateMachineStateBackendError.h"
#include "SBZStateMachineStateWaitingReturnToIIS.h"
#include "SBZStateMachineStateOutro.h"
#include "SBZStateMachineStateWaitingReplay.h"
#include "SBZStateMachineStateReplay.h"
#include "SBZStateMachineStateWaitingRestartLevel.h"

DEFINE_LOG_CATEGORY(LogClientStateMachine);

USBZClientStateMachine::USBZClientStateMachine() {
    this->LoadingScreen = NULL;
}

void USBZClientStateMachine::RequestTravelToServer() {
}

void USBZClientStateMachine::RequestSteamLogin() {
}

void USBZClientStateMachine::RequestSoloGame(int32 LevelIdx, int32 DifficultyIdx, bool bSkipPreMatch) {
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

FString USBZClientStateMachine::GetCurrentStateNameString() const {
    return TEXT("");
}

bool USBZClientStateMachine::CanRequestSoloGame() const {
    return false;
}

void USBZClientStateMachine::ApplyPreplanningAsset(const FString& ItemSku) {
}

void USBZClientStateMachine::Init() {
  Init_Internal(this->GetTypedOuter<UGameInstance>());
}

void USBZClientStateMachine::Start() {
  SetState(USBZClientStateMachineStates::SubsystemInitialisation, nullptr);
}

void USBZClientStateMachine::HandleStateEntered(FName StateName) {
}

void USBZClientStateMachine::Init_Internal(UGameInstance* GameInstance) {
  FCoreDelegates::ApplicationHasReactivatedDelegate.AddUObject(this, &USBZClientStateMachine::OnAppReactivated);
  FCoreDelegates::ApplicationWillDeactivateDelegate.AddUObject(this, &USBZClientStateMachine::OnAppDeactivated);

  this->AddState(USBZClientStateMachineStates::NotLoggedIn, NewObject<USBZStateMachineStateNotLoggedIn>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::NotLoggedIn, ESBZGameStateMachineState::SM_NotLoggedIn);
  this->AddState(USBZClientStateMachineStates::SubsystemInitialisation, NewObject<USBZStateMachineStateSubsystemInitialisation>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::SubsystemInitialisation, ESBZGameStateMachineState::SM_SubsystemInitialisation);
  this->AddState(USBZClientStateMachineStates::WaitFirstGameStart, NewObject<USBZStateMachineStateWaitFirstGameStart>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitFirstGameStart, ESBZGameStateMachineState::SM_WaitFirstGameStart);
  //this->AddState(USBZClientStateMachineStates::WaitPlayGo, NewObject<USBZStateMachineStateWaitPlayGo>());
  //this->StateEnums.Emplace(USBZClientStateMachineStates::WaitPlayGo, ESBZGameStateMachineState::SM_WaitPlayGo);
  this->AddState(USBZClientStateMachineStates::WaitSoloGame, NewObject<USBZStateMachineStateWaitSoloGame>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitSoloGame, ESBZGameStateMachineState::SM_WaitSoloGame);
  this->AddState(USBZClientStateMachineStates::GameStart, NewObject<USBZStateMachineStateGameStart>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::GameStart, ESBZGameStateMachineState::SM_GameStart);
  this->AddState(USBZClientStateMachineStates::Matchmaking, NewObject<USBZStateMachineStateMatchmaking>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::Matchmaking, ESBZGameStateMachineState::SM_Matchmaking);
  this->AddState(USBZClientStateMachineStates::Lobby, NewObject<USBZStateMachineStateLobby>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::Lobby, ESBZGameStateMachineState::SM_Lobby);
  this->AddState(USBZClientStateMachineStates::P2PHost, NewObject<USBZStateMachineStateP2PHost>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::P2PHost, ESBZGameStateMachineState::SM_P2PHost);
  //this->AddState(USBZClientStateMachineStates::ABMatchmaking, NewObject<USBZStateMachineStateABMatchmaking>());
  //this->StateEnums.Emplace(USBZClientStateMachineStates::ABMatchmaking, ESBZGameStateMachineState::SM_ABMatchmaking);
  //this->AddState(USBZClientStateMachineStates::ABPreMatch, NewObject<USBZStateMachineStateABPreMatch>());
  //this->StateEnums.Emplace(USBZClientStateMachineStates::ABPreMatch, ESBZGameStateMachineState::SM_ABPreMatch);
  this->AddState(USBZClientStateMachineStates::WaitingActionPhase, NewObject<USBZStateMachineStateWaitingActionPhase>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitingActionPhase, ESBZGameStateMachineState::SM_WaitingActionPhase);
  this->AddState(USBZClientStateMachineStates::WaitingActionPhaseHost, NewObject<USBZStateMachineStateWaitingActionPhaseHost>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitingActionPhaseHost, ESBZGameStateMachineState::SM_WaitingActionPhaseHost);
  this->AddState(USBZClientStateMachineStates::WaitingActionPhaseClient, NewObject<USBZStateMachineStateWaitingActionPhaseClient>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitingActionPhaseClient, ESBZGameStateMachineState::SM_WaitingActionPhaseClient);
  this->AddState(USBZClientStateMachineStates::WaitingActionPhaseDropIn, NewObject<USBZStateMachineStateWaitingActionPhaseDropIn>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitingActionPhaseDropIn, ESBZGameStateMachineState::SM_WaitingActionPhaseDropIn);
  this->AddState(USBZClientStateMachineStates::FunctionalTest, NewObject<USBZStateMachineStateFunctionalTest>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::FunctionalTest, ESBZGameStateMachineState::SM_FunctionalTest);
  this->AddState(USBZClientStateMachineStates::JobOverview, NewObject<USBZStateMachineStateJobOverview>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::JobOverview, ESBZGameStateMachineState::SM_JobOverview);
  this->AddState(USBZClientStateMachineStates::JobOverviewDropIn, NewObject<USBZStateMachineStateJobOverviewDropIn>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::JobOverviewDropIn, ESBZGameStateMachineState::SM_JobOverviewDropIn);
  this->AddState(USBZClientStateMachineStates::JobOverviewDirectJoin, NewObject<USBZStateMachineStateJobOverviewDirectJoin>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::JobOverviewDirectJoin, ESBZGameStateMachineState::SM_JobOverviewDirectJoin);
  this->AddState(USBZClientStateMachineStates::ActionPhase, NewObject<USBZStateMachineStateActionPhase>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::ActionPhase, ESBZGameStateMachineState::SM_ActionPhase);
  this->AddState(USBZClientStateMachineStates::WaitMainMenu, NewObject<USBZStateMachineStateWaitMainMenu>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitMainMenu, ESBZGameStateMachineState::SM_WaitMainMenu);
  this->AddState(USBZClientStateMachineStates::Result, NewObject<USBZStateMachineStateResult>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::Result, ESBZGameStateMachineState::SM_Result);
  this->AddState(USBZClientStateMachineStates::GameError, NewObject<USBZStateMachineStateGameError>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::GameError, ESBZGameStateMachineState::SM_GameError);
  this->AddState(USBZClientStateMachineStates::BackendError, NewObject<USBZStateMachineStateBackendError>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::BackendError, ESBZGameStateMachineState::SM_BackendError);
  this->AddState(USBZClientStateMachineStates::WaitingReturnToIIS, NewObject<USBZStateMachineStateWaitingReturnToIIS>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitingReturnToIIS, ESBZGameStateMachineState::SM_WaitingReturnToIIS);
  this->AddState(USBZClientStateMachineStates::Outro, NewObject<USBZStateMachineStateOutro>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::Outro, ESBZGameStateMachineState::SM_Outro);
  this->AddState(USBZClientStateMachineStates::WaitingReplay, NewObject<USBZStateMachineStateWaitingReplay>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitingReplay, ESBZGameStateMachineState::SM_WaitingReplay);
  this->AddState(USBZClientStateMachineStates::Replay, NewObject<USBZStateMachineStateReplay>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::Replay, ESBZGameStateMachineState::SM_Replay);
  this->AddState(USBZClientStateMachineStates::WaitingRestartLevel, NewObject<USBZStateMachineStateWaitingRestartLevel>());
  this->StateEnums.Emplace(USBZClientStateMachineStates::WaitingRestartLevel, ESBZGameStateMachineState::SM_WaitingRestartLevel);
}

void USBZClientStateMachine::OnAppReactivated() {
  if (bIsAppDeactivated) {
    bIsAppDeactivated = false;
    //if (!(!bIsReturnToIISPending))
    //  this->RequestReturnToIIS(this->PendingReturnToIISReason[0]);
  }
}

void USBZClientStateMachine::OnAppDeactivated() {
  if(!bIsAppDeactivated)
    bIsAppDeactivated = true;
}


