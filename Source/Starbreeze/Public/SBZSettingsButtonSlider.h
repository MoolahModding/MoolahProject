#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButton.h"
#include "SBZSettingsButtonSlider.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonSlider : public USBZSettingsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderIncrementValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderValue;
    
public:
    USBZSettingsButtonSlider();
    UFUNCTION(BlueprintCallable)
    void SetSliderValue(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(float NewMinSliderValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float NewMaxSliderValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIncrementValue(float NewIncrementValue);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void MinSliderValueChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MaxSliderValueChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void IncrementSliderValueChanged();
    
};

