#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioCaptureAndroid.generated.h"

class UMicrophoneSpeakComponent;

UCLASS(Blueprintable)
class UNIVERSALVOICECHATPRO_API UAudioCaptureAndroid : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioCaptureAndroid();
    UFUNCTION()
    static void AndroidMicrophoneStop(UMicrophoneSpeakComponent* callbackComp);
    
    UFUNCTION()
    static bool AndroidMicrophoneStart(UMicrophoneSpeakComponent* callbackComp, int32 sampleRateToUse);
    
    UFUNCTION()
    static bool AndroidHasPermission();
    
    UFUNCTION()
    static void AndroidAskPermission();
    
};

