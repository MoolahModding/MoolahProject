#include "SBZItemProgressionManager.h"
#include "SBZPlayerItemProgression.h"

USBZItemProgressionManager::USBZItemProgressionManager() {
    this->PlayerItemProgression = CreateDefaultSubobject<USBZPlayerItemProgression>(TEXT("SBZPlayerItemProgression"));
}

USBZItemProgressionManager* USBZItemProgressionManager::GetItemProgressionManager(const UObject* WorldContextObject) {
    return NULL;
}


