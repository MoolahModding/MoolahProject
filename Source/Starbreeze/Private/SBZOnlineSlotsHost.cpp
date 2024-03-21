#include "SBZOnlineSlotsHost.h"

USBZOnlineSlotsHost::USBZOnlineSlotsHost() {
    this->SlotsSync = NULL;
    this->PreMatchLongReadyTimeLimit = 300.00f;
    this->PreMatchShortReadyTimeLimit = 60.00f;
    this->PreTravelTimeLimit = 5.00f;
    this->OnlineSession = NULL;
}

