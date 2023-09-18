#include "AudioCaptureAndroid.h"

UAudioCaptureAndroid::UAudioCaptureAndroid() {
}

void UAudioCaptureAndroid::AndroidMicrophoneStop(UMicrophoneSpeakComponent* callbackComp) {
}

bool UAudioCaptureAndroid::AndroidMicrophoneStart(UMicrophoneSpeakComponent* callbackComp, int32 sampleRateToUse) {
    return false;
}

bool UAudioCaptureAndroid::AndroidHasPermission() {
    return false;
}

void UAudioCaptureAndroid::AndroidAskPermission() {
}


