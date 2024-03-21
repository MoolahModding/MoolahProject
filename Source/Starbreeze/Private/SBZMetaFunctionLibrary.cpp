#include "SBZMetaFunctionLibrary.h"

ESBZMetaEventType USBZMetaFunctionLibrary::GetActiveMetaEventType(const UObject* WorldContextObject) {
    return ESBZMetaEventType::None;
}

bool USBZMetaFunctionLibrary::GetActiveMetaEventModifiers(const UObject* WorldContextObject, TArray<FSBZMetaEventModifierData>& MetaEventModifiers) {
    return false;
}

bool USBZMetaFunctionLibrary::GetActiveMetaEvent(const UObject* WorldContextObject, FSBZMetaEventData& OutMetaEvent) {
    return false;
}

USBZMetaFunctionLibrary::USBZMetaFunctionLibrary() {
}

