#include "SBZNavLinkManager.h"

USBZNavLinkManager::USBZNavLinkManager() {
    this->PointRadius = 30;
    this->MaxNavLinkChecksPerFrame = 100;
}

USBZNavLinkManager* USBZNavLinkManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


