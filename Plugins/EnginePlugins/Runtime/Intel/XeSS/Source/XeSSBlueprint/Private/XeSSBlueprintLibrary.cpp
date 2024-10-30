#include "XeSSBlueprintLibrary.h"

UXeSSBlueprintLibrary::UXeSSBlueprintLibrary() {
}

void UXeSSBlueprintLibrary::SetXeSSQualityMode(EXeSSQualityMode QualityMode) {
}

bool UXeSSBlueprintLibrary::IsXeSSSupported() {
    return false;
}

bool UXeSSBlueprintLibrary::GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage) {
    return false;
}

EXeSSQualityMode UXeSSBlueprintLibrary::GetXeSSQualityMode() {
    return EXeSSQualityMode::Off;
}

TArray<EXeSSQualityMode> UXeSSBlueprintLibrary::GetSupportedXeSSQualityModes() {
    return TArray<EXeSSQualityMode>();
}

EXeSSQualityMode UXeSSBlueprintLibrary::GetDefaultXeSSQualityMode(FIntPoint ScreenResolution) {
    return EXeSSQualityMode::Off;
}


