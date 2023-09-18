#include "SBZWorldRuntimeBase.h"
#include "SBZWorldRuntime.h"

USBZWorldRuntimeBase::USBZWorldRuntimeBase() {
    this->WorldRuntimeClass = USBZWorldRuntime::StaticClass();
}

USBZWorldRuntimeBase* USBZWorldRuntimeBase::GetWorldRuntime(const UObject* WorldContextObject) {
    return NULL;
}


