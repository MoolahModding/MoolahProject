#include "SBZOnlineSlotsHost.h"

USBZOnlineSlotsHost::USBZOnlineSlotsHost() {
    this->SlotsSync = NULL;
    this->PreMatchLongReadyTimeLimit = 300.00f;
    this->PreMatchShortReadyTimeLimit = 60.00f;
    this->PreMatchReadyTimerThreshold = 5.00f;
    this->PreTravelTimeLimit = 5.00f;
    this->StayAsPartyTimeLimit = 15.00f;
    this->OnlineSession = NULL;
}

void USBZOnlineSlotsHost::IndividualReadyTimerTimeout(FUniqueNetIdRepl InPlayerId) const {
}


