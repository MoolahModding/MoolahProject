#include "SBZGamepadBindingsManager.h"

USBZGamepadBindingsManager::USBZGamepadBindingsManager() {
}

USBZGamepadBindingsManager* USBZGamepadBindingsManager::GetGamepadBindingsManager(UObject* WorldContextObject) {
    return NULL;
}

TArray<FText> USBZGamepadBindingsManager::GetBindingNamesLocalized(const FKey& InKey) {
    return TArray<FText>();
}


