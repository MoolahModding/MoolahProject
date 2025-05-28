#include "XeLLBlueprintLibrary.h"

UXeLLBlueprintLibrary::UXeLLBlueprintLibrary() {
}

void UXeLLBlueprintLibrary::SetXeLLMode(const EXeLLMode Mode) {
}

void UXeLLBlueprintLibrary::SetFlashIndicatorEnabled(const bool bEnabled) {
}

bool UXeLLBlueprintLibrary::IsXeLLSupported() {
    return false;
}

EXeLLMode UXeLLBlueprintLibrary::GetXeLLMode() {
    return EXeLLMode::Off;
}

TArray<EXeLLMode> UXeLLBlueprintLibrary::GetSupportedXeLLModes() {
    return TArray<EXeLLMode>();
}

float UXeLLBlueprintLibrary::GetSimulationLatencyInMs() {
    return 0.0f;
}

float UXeLLBlueprintLibrary::GetRenderSubmitLatencyInMs() {
    return 0.0f;
}

float UXeLLBlueprintLibrary::GetRenderLatencyInMs() {
    return 0.0f;
}

float UXeLLBlueprintLibrary::GetPresentLatencyInMs() {
    return 0.0f;
}

bool UXeLLBlueprintLibrary::GetLatencyMarkEnabled() {
    return false;
}

float UXeLLBlueprintLibrary::GetInputLatencyInMs() {
    return 0.0f;
}

float UXeLLBlueprintLibrary::GetGameToRenderLatencyInMs() {
    return 0.0f;
}

float UXeLLBlueprintLibrary::GetGameLatencyInMs() {
    return 0.0f;
}

bool UXeLLBlueprintLibrary::GetFlashIndicatorEnabled() {
    return false;
}


