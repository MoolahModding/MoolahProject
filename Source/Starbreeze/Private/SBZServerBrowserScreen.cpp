#include "SBZServerBrowserScreen.h"

USBZServerBrowserScreen::USBZServerBrowserScreen() {
    this->StackValue = TEXT("Default__SBZServerBrowserScreen");
    this->HeistButtonClass = NULL;
    this->HeistMapIconClass = NULL;
    this->CanvasPanel_HeistMapIcons = NULL;
    this->VerticalBox_HeistButtons = NULL;
    this->SelectedHeistButton = NULL;
    this->HeistMode = ESBZHeistType::Joinable;
    this->ActiveHeistCollectionIndex = -1;
}

void USBZServerBrowserScreen::UpdateHeistCollection() {
}

bool USBZServerBrowserScreen::ToggleStoryModeFilter() {
    return false;
}

void USBZServerBrowserScreen::SetTacticFilter(int32 TacticSelectionIndex) {
}

void USBZServerBrowserScreen::SetHeistNameFilter(const TArray<FSBZServerBrowserHeistLevel>& InHeistData) {
}

void USBZServerBrowserScreen::SetDifficultyFilter(int32 DifficultySelectionIndex) {
}

void USBZServerBrowserScreen::SetActiveHeistMode(int32 NewIndex) {
}

void USBZServerBrowserScreen::SetActiveHeistCollection(int32 NewIndex) {
}

void USBZServerBrowserScreen::RefreshJoinableServers() {
}

void USBZServerBrowserScreen::RefreshHostableHeistCollections() {
}

void USBZServerBrowserScreen::QueryFilters() {
}


void USBZServerBrowserScreen::OnServersUpdated(TEnumAsByte<ESBZServerBrowserSessionsType> SessionsType) {
}







void USBZServerBrowserScreen::NativeOnStoryButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}

void USBZServerBrowserScreen::NativeOnHeistMapIconHovered(USBZMainMenuCrimeNetHeistMapIcon* MapIcon, bool bIsHovered) {
}

void USBZServerBrowserScreen::NativeOnHeistMapIconClicked(USBZMainMenuCrimeNetHeistMapIcon* InSelectedHeistMapIcon) {
}

void USBZServerBrowserScreen::NativeOnHeistButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZServerBrowserScreen::NativeOnHeistButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}

void USBZServerBrowserScreen::HandleMatchmakingStarted() {
}



