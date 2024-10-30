#include "VirtualCursorFunctionLibrary.h"

UVirtualCursorFunctionLibrary::UVirtualCursorFunctionLibrary() {
}

bool UVirtualCursorFunctionLibrary::IsUsingAnalogCursor() {
    return false;
}

bool UVirtualCursorFunctionLibrary::IsMoving() {
    return false;
}

bool UVirtualCursorFunctionLibrary::IsEnabled() {
    return false;
}

bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget() {
    return false;
}

void UVirtualCursorFunctionLibrary::EnableVirtualCursor(APlayerController* PC) {
}

void UVirtualCursorFunctionLibrary::DisableVirtualCursor(APlayerController* PC) {
}


