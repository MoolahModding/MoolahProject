#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZPlayerStateWidgetBase.h"
#include "PD3AttributePercentWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPD3AttributePercentWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ValueGameplayAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute MaxGameplayAttribute;
    
public:
    UPD3AttributePercentWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetup(float CurrentValueSetup, float MaxValueSetup, float PercentageSetup);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMaxAttributeUpdate(float NewValue, float OldPercentage, float NewPercentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCurrentAttributeUpdate(float NewValue, float OldPercentage, float NewPercentage);
    
};

