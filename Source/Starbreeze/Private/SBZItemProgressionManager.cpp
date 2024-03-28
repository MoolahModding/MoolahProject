#include "SBZItemProgressionManager.h"
#include "SBZPlayerItemProgression.h"

USBZItemProgressionManager* USBZItemProgressionManager::GetItemProgressionManager(const UObject* WorldContextObject) {
    return NULL;
}

USBZItemProgressionManager::USBZItemProgressionManager() {
    this->PlayerItemProgression = CreateDefaultSubobject<USBZPlayerItemProgression>(TEXT("SBZPlayerItemProgression"));
}

