#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "PD3DetectionMeterContainer.generated.h"

class UAkAudioEvent;
class UClass;
class UOverlay;
class UPD3DetectionMeter;

UCLASS(Blueprintable, EditInlineNew)
class UPD3DetectionMeterContainer : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DetectionMeterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_DetectionMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DetectedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectedAudioEventCooldown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPD3DetectionMeter*> DetectionMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeLastPlayedDetectedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingDetected;
    
public:
    UPD3DetectionMeterContainer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObservedChanged(bool bObserved);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObserved(bool bIsObserved);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeistGoneLoud();
    
};

