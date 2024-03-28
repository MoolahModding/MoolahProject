#include "SBZNavLinkManager.h"

USBZNavLinkManager* USBZNavLinkManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

USBZNavLinkManager::USBZNavLinkManager() {
    this->PointRadius = 30;
    this->MaxNavLinkChecksPerFrame = 100;
}

