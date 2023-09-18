#include "SBZUIStatics.h"

USBZUIStatics::USBZUIStatics() {
}

void USBZUIStatics::Stop2DSound(int32& SoundID) {
}

void USBZUIStatics::ShowDebugObjective(const UObject* WorldContextObject, const FText& InTextToPrint) {
}

void USBZUIStatics::SetUIInDefaultMode(const UObject* WorldContextObject) {
}

void USBZUIStatics::SetUIInCinematicMode(const UObject* WorldContextObject) {
}

void USBZUIStatics::PrintSubtitle(const UObject* WorldContextObject, const FString& StringToPrint, FLinearColor Colour, float TimeToDisplay) {
}

int32 USBZUIStatics::Play2DSound(const UObject* WorldContextObject, UAkAudioEvent* AudioEvent) {
    return 0;
}

void USBZUIStatics::LogUiVerbose(const FString& LogText) {
}

bool USBZUIStatics::IsWidgetActuallyVisible(UWidget* Widget) {
    return false;
}

bool USBZUIStatics::IsInputTypeController() {
    return false;
}

int32 USBZUIStatics::GetWidgetZOrderValue(ESBZWidgetZOrdering ZOrder) {
    return 0;
}

USBZUIManager* USBZUIStatics::GetUIManager(const UObject* WorldContextObject) {
    return NULL;
}

uint8 USBZUIStatics::GetMaxDifficultyCount() {
    return 0;
}

FString USBZUIStatics::GetMapName(const UObject* WorldContextObject) {
    return TEXT("");
}

FSlateFontInfo USBZUIStatics::GetGlobalFont(UObject* WorldContextObject, FName FontName) {
    return FSlateFontInfo{};
}

FLinearColor USBZUIStatics::GetGlobalColor(UObject* WorldContextObject, FName ColorName) {
    return FLinearColor{};
}

int32 USBZUIStatics::GetCurrentProgressionSaveGameVersion(const UObject* WorldContextObject) {
    return 0;
}

FText USBZUIStatics::FormatIntToTimerText(int32 IntToConvert, bool bAlwaysDisplayHours) {
    return FText::GetEmpty();
}

FText USBZUIStatics::FormatIntToText(int32 IntToConvert, int32 Integral, int32 Precision) {
    return FText::GetEmpty();
}

void USBZUIStatics::DisplayHUDNotification(const UObject* WorldContextObject, const FSBZHUDNotificationData& HUDNotification) {
}

FText USBZUIStatics::ClampText(const FText& InText, int32 MaxCharacters, bool bAddElipses) {
    return FText::GetEmpty();
}


