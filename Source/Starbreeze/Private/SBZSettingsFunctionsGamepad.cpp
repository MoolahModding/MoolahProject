#include "SBZSettingsFunctionsGamepad.h"

USBZSettingsFunctionsGamepad::USBZSettingsFunctionsGamepad() {
}

void USBZSettingsFunctionsGamepad::SetGamepadBindingsPreset(UObject* WorldContextObject, int32 Preset) {
}

void USBZSettingsFunctionsGamepad::SetGamepadBinding(UObject* WorldContextObject, FInputChord Binding, FName ActionName) {
}

int32 USBZSettingsFunctionsGamepad::GetGamepadBindingsPreset(UObject* WorldContextObject) {
    return 0;
}

FInputChord USBZSettingsFunctionsGamepad::GetGamepadBinding(UObject* WorldContextObject, FName ActionName) {
    return FInputChord{};
}

int32 USBZSettingsFunctionsGamepad::GetDefaultGamepadBindingsPreset(UObject* WorldContextObject) {
    return 0;
}

FInputChord USBZSettingsFunctionsGamepad::GetDefaultGamepadBinding(UObject* WorldContextObject, FName ActionName) {
    return FInputChord{};
}


