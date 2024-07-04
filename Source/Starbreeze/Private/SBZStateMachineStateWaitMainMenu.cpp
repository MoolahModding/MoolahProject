#include "SBZStateMachineStateWaitMainMenu.h"

USBZStateMachineStateWaitMainMenu::USBZStateMachineStateWaitMainMenu() {
    this->LoadingScreen = NULL;
}

void USBZStateMachineStateWaitMainMenu::HandleP2PSessionDestroyed(FName SessionName, bool bResult) {
}


