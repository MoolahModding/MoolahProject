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

    UFUNCTION(BlueprintCallable)
    static void AndroidMicrophoneStop(UMicrophoneSpeakComponent* callbackComp);
    
    UFUNCTION(BlueprintCallable)
    static bool AndroidMicrophoneStart(UMicrophoneSpeakComponent* callbackComp, int32 sampleRateToUse);
    
    UFUNCTION(BlueprintCallable)
    static bool AndroidHasPermission();
    
    UFUNCTION(BlueprintCallable)
    static void AndroidAskPermission();
    
};

