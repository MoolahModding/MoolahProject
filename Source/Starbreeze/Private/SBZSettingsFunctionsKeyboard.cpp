#include "SBZSettingsFunctionsKeyboard.h"

void USBZSettingsFunctionsKeyboard::SetSecondaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale, FInputChord Binding) {
}

void USBZSettingsFunctionsKeyboard::SetPrimaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale, FInputChord Binding) {
}

FInputChord USBZSettingsFunctionsKeyboard::GetSecondaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale) {
    return FInputChord{};
}

FInputChord USBZSettingsFunctionsKeyboard::GetPrimaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale) {
    return FInputChord{};
}

FInputChord USBZSettingsFunctionsKeyboard::GetDefaultSecondaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale) {
    return FInputChord{};
}

FInputChord USBZSettingsFunctionsKeyboard::GetDefaultPrimaryKeyboardBinding(UObject* WorldContextObject, FName AxisOrActionName, float Scale) {
    return FInputChord{};
}

USBZSettingsFunctionsKeyboard::USBZSettingsFunctionsKeyboard() {
}

