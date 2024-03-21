#include "PD3Dispatcher.h"

void UPD3Dispatcher::Multicast_CallDispatcherByAsset_Implementation(const USBZActionNotificationAsset* CallerReason) {
}

UPD3Dispatcher* UPD3Dispatcher::GetDispatcher(UObject* WorldContextObject) {
    return NULL;
}

void UPD3Dispatcher::CallDispatcherByAsset(const USBZActionNotificationAsset* CallerReason, UObject* InDispatcherCallData) {
}

void UPD3Dispatcher::CallDispatcher(EPD3DispatchCaller InCaller, EPD3DispatchCallerReason InReason) {
}

UPD3Dispatcher::UPD3Dispatcher() {
    this->CallData = NULL;
}

