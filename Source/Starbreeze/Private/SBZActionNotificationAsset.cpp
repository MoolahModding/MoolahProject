#include "SBZActionNotificationAsset.h"

USBZActionNotificationAsset::USBZActionNotificationAsset() {
    this->NewHeistState = EPD3HeistState::Alarm;
    this->DisplayTime = 1.50f;
    this->AudioEvent = NULL;
    this->VoiceComment = NULL;
    this->VoicePriority = ESBZVoicePriority::MediumPriority;
}

