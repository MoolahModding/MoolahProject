#include "SBZWorldRuntimeBase.h"
// WorldRuntimeClass is left uninitialised, to avoid a circular dependency
//#include "SBZWorldRuntime.h"

USBZWorldRuntimeBase::USBZWorldRuntimeBase() {
    //this->WorldRuntimeClass = USBZWorldRuntime::StaticClass();
}

USBZWorldRuntimeBase* USBZWorldRuntimeBase::GetWorldRuntime(const UObject* WorldContextObject) {
    return NULL;
}


