#include "SBZUIManager.h"

USBZUIManager::USBZUIManager() {
    this->PopUpWidgetClass = NULL;
    this->PopUpWidget = NULL;
    this->TutorialPopUpBodyWidgetClass = NULL;
    this->TutorialPopUpBody = NULL;
    this->FullscreenNotificationWidgetClass = NULL;
    this->FullscreenNotificationWidget = NULL;
    this->SideBarNotificationWidgetClass = NULL;
    this->SideBarNotificationWidget = NULL;
    this->InfoPopupWidgetWidgetClass = NULL;
    this->InfoPopupWidget = NULL;
    this->DebugWidgetClass = NULL;
    this->DebugWidget = NULL;
    this->SubtitleWidgetClass = NULL;
    this->PlatformSprite_GenericPC = NULL;
    this->PlatformSprite_GenericConsole = NULL;
    this->PlatformSprite_Playstation = NULL;
    this->PlatformSprite_XBox = NULL;
    this->NebulaSprite = NULL;
    this->XBoxGamepadSprite = NULL;
    this->PlayStationGamepadSprite = NULL;
    this->KeySpriteEmpty = NULL;
    this->SubtitleWidget = NULL;
    this->PopUpStackString = TEXT("PopUp");
    this->SwitchingStackString = TEXT("Switching");
    this->BlackBackgroundWidgetClass = NULL;
    this->ActiveMenuWidget = NULL;
    this->ActiveLoginScreenWidget = NULL;
    this->ActivePSOCompilationScreenWidget = NULL;
    this->LastFocusedWidget = NULL;
    this->LastUIStackUpdate = 0.00f;
    this->bSetFocusOnUnlock = false;
    this->bSavePushedUIStackValues = false;
    this->UIData = NULL;
}

bool USBZUIManager::TryRemoveFromStack(const FName& StackValue) {
    return false;
}

void USBZUIManager::SwitchUIStack(const FName& StackValueToSwitch) {
}

void USBZUIManager::SimulateJoinHeistActivity() {
}

void USBZUIManager::ShowTutorialPopUp(const UObject* WorldContextObject, const USBZTutorialPopUpDataAsset* InTutorialToDisplay, FSBZOnPopUpWidgetClosed InPopUpActionInputDelegate) {
}

void USBZUIManager::ShowSidebarNotification(FSBZSideBarNotificationData InSideBarNotificationData) {
}

void USBZUIManager::ShowPopUpWithCallback(FSBZUIPopupData InPopupData, FSBZOnPopUpWidgetClosed InPopUpActionInputDelegate, int32 InAutomaticClosingCountdownTime, FName InAutomaticClosingActionName, bool bReturnFocusWhenClosed, bool bDeferUIStackEvents) {
}

void USBZUIManager::ShowPopUp(FSBZUIPopupData InPopupData, bool bReturnFocusWhenClosed, bool bDeferUIStackEvents) {
}

void USBZUIManager::ShowMetaNotification(FSBZMetaNotification InMetaNotification) {
}

void USBZUIManager::ShowFullScreenNotification(FSBZUIFullscreenNotificationData InFullscreenNotificationData) {
}

void USBZUIManager::ShowEULAPopup(const FSBZOnPopUpWidgetClosed& InDelegate) {
}

bool USBZUIManager::ShouldStartInHeistSelection() const {
    return false;
}

bool USBZUIManager::ShouldDisplayCursor() const {
    return false;
}

void USBZUIManager::SetStartInHeistSelection() {
}

void USBZUIManager::SetOnePlayerMatchHook() {
}

void USBZUIManager::SetLogoP3Visibility(ESlateVisibility InVisibility) {
}

void USBZUIManager::SetLoginScreenVisibility(ESlateVisibility InVisibility) {
}

void USBZUIManager::SetLastFocusedWidget(USBZWidgetBase* InLastFocusedWidget) {
}

void USBZUIManager::SetInputModeToUI() {
}

void USBZUIManager::SetInputModeToGameAndUI() {
}

void USBZUIManager::SetInputModeToGame() {
}

void USBZUIManager::SetDisplayPlayerHUD(bool bShouldDisplayPlayerHUD) {
}

void USBZUIManager::SaveProgressionSaveGame() {
}

void USBZUIManager::RemoveGameplayTag(FGameplayTag UITag) {
}

void USBZUIManager::RemoveControlsReference(int32 InControlsReferenceID) {
}

void USBZUIManager::RefreshFullScreenNotificationQueue() {
}

void USBZUIManager::PushUIStack(const FName& StackValue) {
}

FName USBZUIManager::PopStack() {
    return NAME_None;
}

FName USBZUIManager::PeekStack() const {
    return NAME_None;
}

void USBZUIManager::OnStateMachineStateExited(FName StateName) {
}

void USBZUIManager::OnStateMachineStateEntered(FName StateName) {
}

void USBZUIManager::OnPopupControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void USBZUIManager::OnOptForSoloModePopupClosed(FName ClosingActionName) {
}

void USBZUIManager::OnHeistSelectionMenuSet() {
}

bool USBZUIManager::IsStackLocked() const {
    return false;
}

bool USBZUIManager::IsStackEmpty() const {
    return false;
}

bool USBZUIManager::IsPopupShowing() const {
    return false;
}

bool USBZUIManager::IsGameInstallPending() const {
    return false;
}

bool USBZUIManager::IsControllerMode() const {
    return false;
}

void USBZUIManager::HideMenuControlsReference(const UObject* WorldContextObject) {
}

void USBZUIManager::HandleProgressionSave(ESBZMetaRequestResult Result) {
}

void USBZUIManager::HandleLocalPlayerControllerReady() {
}

void USBZUIManager::HandleActionPhaseEntered() {
}

TArray<FName> USBZUIManager::GetUIStack() const {
    return TArray<FName>();
}

USBZUIData* USBZUIManager::GetUIData(UObject* WorldContextObject) {
    return NULL;
}

UPaperSprite* USBZUIManager::GetSpriteForPlatform(ESBZPlatform InPlatform, bool bUseCurrentPlatformIconIfUnknown) const {
    return NULL;
}

UPaperSprite* USBZUIManager::GetSpriteForNebula() const {
    return NULL;
}

USBZPopupWidget* USBZUIManager::GetPopUpWidget() const {
    return NULL;
}

USBZBaseMenuWidget* USBZUIManager::GetMenuWidget(const UObject* WorldContextObject) {
    return NULL;
}

FText USBZUIManager::GetLocalizedPlayerNoName() const {
    return FText::GetEmpty();
}

USBZWidgetBase* USBZUIManager::GetLastFocusedWidget() const {
    return NULL;
}

UPaperSprite* USBZUIManager::GetKeySpriteForFKey(const FKey& InKey) const {
    return NULL;
}

UPaperSprite* USBZUIManager::GetKeySpriteEmpty() const {
    return NULL;
}

void USBZUIManager::GetKeysForAxisMapping(const FName& InAxisName, TArray<FKey>& ReturnList) const {
}

FKey USBZUIManager::GetKeyForActionMapping(const FName& InActionName) const {
    return FKey{};
}

ESBZInputState USBZUIManager::GetInputMode() const {
    return ESBZInputState::Game;
}

UPaperSprite* USBZUIManager::GetGamepadSprite() const {
    return NULL;
}

TArray<FSBZUIFullscreenNotificationData> USBZUIManager::GetFullscreenNotificationQueue() const {
    return TArray<FSBZUIFullscreenNotificationData>();
}

bool USBZUIManager::GetActiveControlsReference(FSBZControlsReference& OutControlsReference) {
    return false;
}

void USBZUIManager::DisplayHUDNotification(const FSBZHUDNotificationData& HUDNotification) {
}

void USBZUIManager::ClearPopupStack() {
}

void USBZUIManager::AddUIGameplayTag(FGameplayTag UITag) {
}

void USBZUIManager::AddMenuControlsReference(const UObject* WorldContextObject, const FSBZButtonControlsReference& InButtonControlsReference, FOnControlsReferenceActionPressed ControlsReferenceActionPressedEvent) {
}

int32 USBZUIManager::AddControlsReference(const FSBZControlsReference& InControlsReference) {
    return 0;
}


