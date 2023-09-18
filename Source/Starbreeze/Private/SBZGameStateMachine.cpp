#include "SBZGameStateMachine.h"

USBZGameStateMachine::USBZGameStateMachine() {
    this->StateMachine = NULL;
}

void USBZGameStateMachine::SetMatchmakingSecurityCompanies(const TArray<ESBZSecurityCompany>& InSecurityCompanies) {
}

void USBZGameStateMachine::SetMatchmakingRandomSeed(int32 InRandomSeed) {
}

void USBZGameStateMachine::SetMatchMakingParameters(const FSBZOnlineMatchmakingParams& InMatchmakingParameters) {
}

void USBZGameStateMachine::SetMatchmakingLevelIdx(int32 InLevelIdx) {
}

void USBZGameStateMachine::SetMatchmakingDifficultyIdx(uint8 InDifficultyIdx) {
}

void USBZGameStateMachine::SetMatchmakingDifficulty(ESBZDifficulty InDifficulty) {
}

void USBZGameStateMachine::SetIsMatchmakingQuickMatch(bool bInIsQuickMatch) {
}

void USBZGameStateMachine::RequestSoloGame(int32 LevelIdx, int32 DifficultyIdx) {
}

void USBZGameStateMachine::RequestReturnToMainMenu(ESBZReturnToMainMenuReason Reason) {
}

void USBZGameStateMachine::RequestReturnToLogin(ESBZReturnToLoginReason Reason) {
}

void USBZGameStateMachine::RequestReturnToIIS(ESBZReturnToIISReason Reason) {
}

void USBZGameStateMachine::RequestRestart() {
}

void USBZGameStateMachine::RequestReplay(const FSBZReplayInfo& ReplayInfo) {
}

void USBZGameStateMachine::RequestPlatformJoin() {
}

void USBZGameStateMachine::RequestP2PHost(const FSBZOnlineMatchmakingParams& MatchmakingParameters) {
}

void USBZGameStateMachine::RequestMissionEnd(const FSBZEndMissionRequestData& RequestData) {
}

void USBZGameStateMachine::RequestMatchmaking(const FSBZOnlineMatchmakingParams& MatchmakingParameters) {
}

void USBZGameStateMachine::RequestJobOverviewReady(bool bSetClientReady) {
}

void USBZGameStateMachine::RequestJobOverviewComplete(bool bIsClientReady) {
}

void USBZGameStateMachine::RequestJobOverviewAllReady(EBlackScreenTransitionType BlackScreenTransitionType) {
}

void USBZGameStateMachine::RequestGoToLobby() {
}

void USBZGameStateMachine::RequestGameStart() {
}

void USBZGameStateMachine::RequestGameError(ESBZGameMachineStateError Error) {
}

void USBZGameStateMachine::RequestEndOutroSequence() {
}

void USBZGameStateMachine::RequestEndIntroSequence() {
}

void USBZGameStateMachine::RequestDirectJoin() {
}

void USBZGameStateMachine::RequestDefaultMatchmaking() {
}

void USBZGameStateMachine::RemoveMatchmakingSecurityCompany(ESBZSecurityCompany InSecurityCompany) {
}

bool USBZGameStateMachine::IsMatchmakingQuickMatch() const {
    return false;
}

bool USBZGameStateMachine::IsMatchmakingInProgress() const {
    return false;
}

bool USBZGameStateMachine::HasStartedOutro() const {
    return false;
}

ESBZOnlineSessionPhase USBZGameStateMachine::GetSessionPhase() const {
    return ESBZOnlineSessionPhase::Undefined;
}

TArray<ESBZSecurityCompany> USBZGameStateMachine::GetMatchmakingSecurityCompanies() const {
    return TArray<ESBZSecurityCompany>();
}

TArray<ESBZSecurityCompany> USBZGameStateMachine::GetMatchmakingSecuritCompaniesForHeist(UPD3HeistDataAsset* InHeist, ESBZDifficulty InDifficulty) const {
    return TArray<ESBZSecurityCompany>();
}

int32 USBZGameStateMachine::GetMatchmakingRandomSeed() const {
    return 0;
}

FSBZOnlineMatchmakingParams USBZGameStateMachine::GetMatchMakingParameters() {
    return FSBZOnlineMatchmakingParams{};
}

uint8 USBZGameStateMachine::GetMatchmakingLevelIdx() const {
    return 0;
}

uint8 USBZGameStateMachine::GetMatchmakingDifficultyIdx() const {
    return 0;
}

ESBZDifficulty USBZGameStateMachine::GetMatchmakingDifficulty() const {
    return ESBZDifficulty::Default;
}

void USBZGameStateMachine::DebugOnlineTravel(const FString& LevelUrl, bool bIsAbsolute) {
}

void USBZGameStateMachine::AddMatchmakingSecurityCompany(ESBZSecurityCompany InSecurityCompany) {
}


