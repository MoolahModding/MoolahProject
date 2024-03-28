#include "SBZMainMenuCrimeNetTutorial.h"




void USBZMainMenuCrimeNetTutorial::NativeOnHeistButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuCrimeNetTutorial::NativeOnHeistButtonFocused(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}

void USBZMainMenuCrimeNetTutorial::NativeOnDisabledHeistButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuCrimeNetTutorial::HandlePartyChanged() {
}


USBZMainMenuCrimeNetTutorial::USBZMainMenuCrimeNetTutorial() {
    this->HeistButtonClass = NULL;
    this->VerticalBox_HeistButtons = NULL;
    this->SelectedHeistButton = NULL;
    this->bHasDisabledButtons = false;
}

