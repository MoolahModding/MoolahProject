#include "XeFGBlueprintLibrary.h"

UXeFGBlueprintLibrary::UXeFGBlueprintLibrary() {
}

void UXeFGBlueprintLibrary::SetXeFGMode(EXeFGMode Mode) {
}

bool UXeFGBlueprintLibrary::IsXeFGSupported() {
    return false;
}

bool UXeFGBlueprintLibrary::IfRelaunchRequiredByXeFG() {
    return false;
}

EXeFGMode UXeFGBlueprintLibrary::GetXeFGMode() {
    return EXeFGMode::Off;
}

TArray<EXeFGMode> UXeFGBlueprintLibrary::GetSupportedXeFGModes() {
    return TArray<EXeFGMode>();
}


