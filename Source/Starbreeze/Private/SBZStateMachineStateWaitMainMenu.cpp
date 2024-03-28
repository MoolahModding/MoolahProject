#include "SBZStateMachineStateWaitMainMenu.h"

void USBZStateMachineStateWaitMainMenu::HandleP2PSessionDestroyed(FName SessionName, bool bResult) {
}

USBZStateMachineStateWaitMainMenu::USBZStateMachineStateWaitMainMenu() {
    this->LoadingScreen = NULL;
}

