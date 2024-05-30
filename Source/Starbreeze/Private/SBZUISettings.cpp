#include "SBZUISettings.h"

USBZUISettings::USBZUISettings() {
    this->ServersStatusMessageURL_Development = TEXT("https://lw3wlc5lm6.execute-api.eu-north-1.amazonaws.com/GetServerStatusMessage_Development");
    this->ServersStatusMessageURL_Live = TEXT("https://5g68ruvnwk.execute-api.eu-north-1.amazonaws.com/GetServerStatusMessage");
}


