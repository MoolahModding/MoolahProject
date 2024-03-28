#include "SBZCoverPointManager.h"

TArray<FSBZCoverShootingPoints> USBZCoverPointManager::GetShootingPoints() const {
    return TArray<FSBZCoverShootingPoints>();
}

TArray<ASBZCoverPoint*> USBZCoverPointManager::GetCoverWithinBounds(const FBoxSphereBounds& Bounds) {
    return TArray<ASBZCoverPoint*>();
}

uint8 USBZCoverPointManager::GetCoverSafeness(const ASBZCoverPoint* CoverPoint, const TArray<AActor*>& Enemies) const {
    return 0;
}

USBZCoverPointManager* USBZCoverPointManager::Get(UObject* WorldContextObject) {
    return NULL;
}

USBZCoverPointManager::USBZCoverPointManager() {
}

