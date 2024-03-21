#include "SBZWorldRuntimeBase.h"

USBZWorldRuntimeBase* USBZWorldRuntimeBase::GetWorldRuntime(const UObject* WorldContextObject) {
    return NULL;
}

USBZWorldRuntimeBase::USBZWorldRuntimeBase() {
    this->WorldRuntimeClass = USBZWorldRuntimeBase::StaticClass();
}

