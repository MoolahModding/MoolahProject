#include "SBZChatGameSettings.h"

USBZChatGameSettings::USBZChatGameSettings() {
    this->FadeOutTimer = 5.00f;
    this->MaxCharPerMessage = 200;
    this->MinCharPerMessage = 0;
    this->MessageCooldownTimer = 20.00f;
    this->MaxMessagesBeforeBlock = 5;
    this->MessageSpamCooldown = 120.00f;
    this->MaxTotalDisplayedMessages = 100;
}

