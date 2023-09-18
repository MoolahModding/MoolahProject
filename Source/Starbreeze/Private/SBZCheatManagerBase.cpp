#include "SBZCheatManagerBase.h"
#include "SBZDebugCameraController.h"

USBZCheatManagerBase::USBZCheatManagerBase() {
    this->InputComponent = NULL;
    this->AccelByteAdminHelper = NULL;
    this->DebugCameraControllerClass = ASBZDebugCameraController::StaticClass();
}

void USBZCheatManagerBase::VoteRestartLevel() {
}

void USBZCheatManagerBase::UnselectSocket(int32 PlayerIndex) {
}

void USBZCheatManagerBase::UnselectComponent(int32 PlayerIndex) {
}

void USBZCheatManagerBase::Unselect(int32 PlayerIndex) {
}

void USBZCheatManagerBase::ToggleMuteMusic() {
}

void USBZCheatManagerBase::ToggleInGameCheatMenu() {
}

void USBZCheatManagerBase::ToggleDrawDebugSpread() {
}

void USBZCheatManagerBase::ToggleCVar(const FString& CVar, int32 First, int32 Second) {
}

void USBZCheatManagerBase::SetInputTypeOverride(int32 Override) {
}

void USBZCheatManagerBase::SetDebugEarnedExperiencePoints(int32 EarnedExperiencePoints) {
}

void USBZCheatManagerBase::SetCulture(const FString& Name) {
}

void USBZCheatManagerBase::SetCameraMode(const FName& CameraMode, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SetAudioRTPCValue(const FName& Name, float Value, int32 PlayerIndex) {
}

void USBZCheatManagerBase::ServerCommand(const FString& Command, bool bIsExecutedOnAll, bool bIsLocallyControlledOnly, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectTarget(int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectSocketName(const FName& Name, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectSocketIndex(int32 Index, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectParentSocket(int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectParentActor(int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectLast(int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectComponentName(const FName& Name, int32 DepthStencil, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectComponentIndex(int32 Index, int32 DepthStencil, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectComponentClass(const FName& ClassName, int32 DepthStencil, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectChild(int32 Index, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectActorName(const FName& Name, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SelectActorClass(const FName& ClassName, int32 PlayerIndex) {
}

void USBZCheatManagerBase::SaveProgressionSaveGame() {
}

void USBZCheatManagerBase::ResetSettingsSaveGame() {
}

void USBZCheatManagerBase::ResetProgressionSaveGame() {
}

void USBZCheatManagerBase::ResetMyAccount(const FString& Password) {
}

void USBZCheatManagerBase::RequestSwitchUser() {
}

void USBZCheatManagerBase::RequestGameError(ESBZGameMachineStateError State, int32 PlayerIndex) {
}

void USBZCheatManagerBase::PrintWarning(const FString& Text, bool bIsDecodingNeeded) {
}

void USBZCheatManagerBase::PrintVersion() {
}

void USBZCheatManagerBase::PrintTargetAbilitySystem(bool bIsLocallyControlledOnly, int32 PlayerIndex) {
}

void USBZCheatManagerBase::PrintStuckInfo() {
}

void USBZCheatManagerBase::PrintSelectionHierarchy(bool bIsChildActorIncluded, int32 PlayerIndex) {
}

void USBZCheatManagerBase::PrintSelection(int32 PlayerIndex) {
}

void USBZCheatManagerBase::PrintLog(const FString& Text, bool bIsDecodingNeeded) {
}

void USBZCheatManagerBase::PrintInputEnabledBothCurrent() {
}

void USBZCheatManagerBase::PrintInputEnabled(int32 PlayerIndex) {
}

void USBZCheatManagerBase::PrintError(const FString& Text, bool bIsDecodingNeeded) {
}

void USBZCheatManagerBase::PrintAbilitySystemBothCurrent() {
}

void USBZCheatManagerBase::PrintAbilitySystem(int32 PlayerIndex) {
}

void USBZCheatManagerBase::OnEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void USBZCheatManagerBase::LoadProgressionSaveGame() {
}

void USBZCheatManagerBase::FetchAllVendorItems(int32 MaxCount) {
}

void USBZCheatManagerBase::FakeInvite(const FString& UserId, int32 PlayerIndex) {
}

void USBZCheatManagerBase::ExecF(const FString& File) {
}

void USBZCheatManagerBase::DumpWeaponPresetAssets() {
}

void USBZCheatManagerBase::DumpAssetDatabase() {
}

void USBZCheatManagerBase::DumpActiveLoadout() {
}

void USBZCheatManagerBase::DisconnectServer(bool bIsGraceful) {
}

void USBZCheatManagerBase::DisconnectPlayer(bool bIsLocallyDisconnected, bool bIsGraceful, int32 PlayerIndex) {
}

void USBZCheatManagerBase::DisableTimeouts() {
}

void USBZCheatManagerBase::DeleteProgressionSaveGame() {
}

void USBZCheatManagerBase::DeleteMyAccount() {
}

void USBZCheatManagerBase::DebugVoteRecall() {
}

void USBZCheatManagerBase::DebugVotePositive() {
}

void USBZCheatManagerBase::DebugVoteNegative() {
}

void USBZCheatManagerBase::DebugVoteInit() {
}

void USBZCheatManagerBase::DebugIncrementPlayerStat(const FString& StatCode, int32 Increment) {
}

void USBZCheatManagerBase::DebugChallengeRecords(const FString& Tag, const FString& Status, int32 Offset, int32 Limit) {
}

void USBZCheatManagerBase::ClearFriends() {
}


