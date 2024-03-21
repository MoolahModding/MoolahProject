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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoppedBeingDetected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDetected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewDetector(AActor* InDetectingActor, float InDetectionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetectionValueUpdated(float InDetectionValue);
    
};

