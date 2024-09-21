#include "SBZSearchAndHostMatchmaking.h"

USBZSearchAndHostMatchmaking::USBZSearchAndHostMatchmaking() {
    this->MaxSearchesPerRequest = -1;
    this->RepeatSearchDelayMin = 5.00f;
    this->RepeatSearchDelayMax = 25.00f;
    this->LostConnectionDelayMin = 1.00f;
    this->LostConnectionDelayMax = 10.00f;
    this->PowerLevelDeltaSmall = 10.00f;
    this->PowerLevelDeltaMedium = 25.00f;
    this->bPartyDropInEnabled = true;
}

void USBZSearchAndHostMatchmaking::HandleLostConnectionToHost(ESBZOnlineCode Result) {
}


