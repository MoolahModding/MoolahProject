#include "SBZKickingManager.h"

void USBZKickingManager::KickPlayer(const UObject* WorldContextObject, FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick) {
}

USBZKickingManager::USBZKickingManager() {
    this->TimeToKick = 30.00f;
    this->TimeToBeKickedAgainOnFailedKick = 120.00f;
    this->bWasClientRecentlyKicked = false;
}

