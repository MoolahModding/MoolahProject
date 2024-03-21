#include "SBZOnlineVoip.h"

void USBZOnlineVoip::SetCaptureDevice(const FString& DeviceName) {
}

void USBZOnlineVoip::HandleStateEntered(FName NewState) {
}

FString USBZOnlineVoip::GetSelectedCaptureDevice() {
    return TEXT("");
}

USBZOnlineVoip* USBZOnlineVoip::GetSBZOnlineVoip(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FString> USBZOnlineVoip::GetCaptureDevices() {
    return TArray<FString>();
}

float USBZOnlineVoip::GetCaptureDeviceAmplitude() {
    return 0.0f;
}

USBZOnlineVoip::USBZOnlineVoip() {
}

