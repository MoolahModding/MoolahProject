#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnlineVoip.generated.h"

class USBZOnlineVoip;

UCLASS(Blueprintable)
class USBZOnlineVoip : public UObject {
    GENERATED_BODY()
public:
    USBZOnlineVoip();
    UFUNCTION(BlueprintCallable)
    void SetCaptureDevice(const FString& DeviceName);
    
protected:
    UFUNCTION()
    void HandleStateEntered(FName NewState);
    
public:
    UFUNCTION(BlueprintPure)
    FString GetSelectedCaptureDevice();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZOnlineVoip* GetSBZOnlineVoip(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetCaptureDevices();
    
    UFUNCTION(BlueprintCallable)
    float GetCaptureDeviceAmplitude();
    
};

