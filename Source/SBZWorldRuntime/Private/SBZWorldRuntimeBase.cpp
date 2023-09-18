#include "SBZWorldRuntimeBase.h"

USBZWorldRuntimeBase::USBZWorldRuntimeBase() {
    this->WorldRuntimeClass = GetWorldRuntime(this)->GetClass();
}

USBZWorldRuntimeBase* USBZWorldRuntimeBase::GetWorldRuntime(const UObject* WorldContextObject) {
    return NULL;
}


