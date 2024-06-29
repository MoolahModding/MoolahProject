#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZPlayerStateWidgetBase.h"
#include "SBZDoubleAttributeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDoubleAttributeWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute PrimaryGameplayAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute SecondaryGameplayAttribute;
    
public:
    USBZDoubleAttributeWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(float PrimaryValue, float SecondaryValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecondaryAttributeUpdate(float NewValue, float OldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryAttributeUpdate(float NewValue, float OldValue);
    
};

