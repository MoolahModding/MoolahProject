#include "SBZMainMenuCrimeNet.h"

void USBZMainMenuCrimeNet::UpdateHeistCollection() {
}

bool USBZMainMenuCrimeNet::ToggleStoryModeFilter() {
    return false;
}

void USBZMainMenuCrimeNet::SetActiveHeistCollection(int32 NewIndex) {
}

void USBZMainMenuCrimeNet::RefreshCollections() {
}



void USBZMainMenuCrimeNet::OnHeistButtonNavigation(EUINavigation ButtonNavigation) {
}


void USBZMainMenuCrimeNet::NativeOnHeistMapIconClicked(USBZMainMenuCrimeNetHeistMapIcon* InSelectedHeistMapIcon) {
}

void USBZMainMenuCrimeNet::NativeOnHeistButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuCrimeNet::NativeOnHeistButtonHovered(USBZMainMenuCrimeNetHeistMapIcon* MapIcon, bool bIsHovered) {
}

void USBZMainMenuCrimeNet::NativeOnHeistButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}

void USBZMainMenuCrimeNet::IncrementHeistCollection() {
}

void USBZMainMenuCrimeNet::DecrementHeistCollection() {
}

USBZMainMenuCrimeNet::USBZMainMenuCrimeNet() {
    this->HeistButtonClass = NULL;
    this->StoryModeButtonClass = NULL;
    this->HorizontalBox_HeistButtons = NULL;
    this->HeistMapIconClass = NULL;
    this->CanvasPanel_HeistMapIcons = NULL;
    this->SelectedHeistButton = NULL;
    this->bShowStoryModeButtons = true;
    this->ActiveHeistCollectionIndex = -1;
}

