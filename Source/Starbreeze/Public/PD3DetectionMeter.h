#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "PD3DetectionMeter.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UPD3DetectionMeter : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DetectingActor;
    
public:
    UPD3DetectionMeter();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStoppedBeingDetected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerDetected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewDetector(AActor* InDetectingActor, float InDetectionValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetectionValueUpdated(float InDetectionValue);
    
};

