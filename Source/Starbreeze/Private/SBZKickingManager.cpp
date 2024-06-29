#include "SBZKickingManager.h"

USBZKickingManager::USBZKickingManager() {
    this->TimeToKick = 30.00f;
    this->TimeToBeKickedAgainOnFailedKick = 120.00f;
    this->bWasClientRecentlyKicked = false;
}

void USBZKickingManager::KickPlayer(const UObject* WorldContextObject, FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick) {
}


